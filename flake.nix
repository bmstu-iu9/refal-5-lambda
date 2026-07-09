{
  description = "Компилятор Рефала-5λ";

  inputs = {
    self.submodules = true;
    nixpkgs.url = "github:nixos/nixpkgs?ref=nixos-unstable";
  };

  outputs =
    { self, nixpkgs }:
    let
      forEachSystem =
        f: nixpkgs.lib.genAttrs [ "x86_64-linux" ] (system: f nixpkgs.legacyPackages.${system});
      package =
        { pkgs, ... }:
        pkgs.stdenv.mkDerivation {
          name = "refal-5-lambda";
          src = ./.;
          postPatch = ''
            patchShebangs .
          '';
          buildPhase = ''
            ./bootstrap.sh --no-tests
          '';
          installPhase = ''
            DISTDIR="$out/opt/refal-5-lambda"
            mkdir -p $DISTDIR
            cp -r ./distrib/* $DISTDIR
            mkdir $out/bin
            ln -s $DISTDIR/bin/* $out/bin
            rm $out/bin/rlc $out/bin/rlmake
            echo -e "#!${pkgs.bash}/bin/bash\n$DISTDIR/bin/rlc \"\$@\"" > $out/bin/rlc
            echo -e "#!${pkgs.bash}/bin/bash\n$DISTDIR/bin/rlmake \"\$@\"" > $out/bin/rlmake
            chmod u+x $out/bin/rlc $out/bin/rlmake
          '';
          dontStrip = true;
        };
    in
    {
      packages = forEachSystem (pkgs: {
        default = pkgs.callPackage package { };
      });
      overlays.default = final: prev: {
        refal-5-lambda = final.callPackage package { };
      };
    };
}
