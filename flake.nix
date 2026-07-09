{
    inputs = {
        utils.url = "github:numtide/flake-utils";
    };

    outputs = { self, utils, nixpkgs, ...  }: utils.lib.eachDefaultSystem
    (system:
        let
            pkgs = import nixpkgs { inherit system; };
            version = with builtins; head (match ".*VERSION=([[:digit:].]+).*" (readFile ./docs/setup.bash));
        in {
        defaultPackage = with pkgs; stdenv.mkDerivation {
            name = "refal-5-lambda";
            inherit version;

            src = ./.;

            dontStrip = true;

            patchPhase = ''
                runHook prePatchPhase
                find -type f -exec sed -i '1,1s\#!/bin/bash\#!${pkgs.bash}/bin/bash\' '{}' ';'
                runHook postPatchPhase
            '';
            buildPhase = ''
                runHook preBuildPhase
                ./bootstrap.sh
                runHook postBuildPhase
            '';
            installPhase = ''
                runHook preInstallPhase
                mkdir -p $out
                mv bin lib c-plus-plus.conf.sh $out
                runHook postInstallPhase
            '';

        };
    });
}
