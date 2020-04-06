#!/bin/bash
(
  VERSION=2.5

  echo $(date): "*** Installing Refal-5λ $VERSION ***" | cat
  echo $(date): 'Prepare directory ~/.local/share/refal-5-lambda' | cat
  mkdir -p ~/.local/share/refal-5-lambda
  cd ~/.local/share/refal-5-lambda
  find ! -name c-plus-plus.conf.sh -delete

  echo $(date): Starting download distributive, wait few minutes... | cat
  DISTRIB=https://github.com/bmstu-iu9/refal-5-lambda/releases/download/$VERSION/bootstrap-refal-5-lambda-$VERSION.tar.gz
  ( curl -L $DISTRIB || wget -q -O - $DISTRIB ) | tar xzf -
  chmod +x bootstrap.sh
  echo $(date): Downloading is finished

  echo $(date): Compiling sources, wait few minutes...
  ./bootstrap.sh
  echo $(date): Compilation finished

  CONFIG=~/.bashrc
  if [ $(uname) == Darwin ]; then
    CONFIG=~/.bash_profile
  fi

  CONFIG_UPDATED=false

  if ! grep -qE 'PATH=.*/.local/share/refal-5-lambda/bin' $CONFIG; then
    echo 'export PATH=$PATH:~/.local/share/refal-5-lambda/bin' >> $CONFIG
    CONFIG_UPDATED=true
  fi

  if ! grep -qE 'RL_MODULE_PATH=.*/.local/share/refal-5-lambda/lib' $CONFIG; then
    echo 'export RL_MODULE_PATH=$RL_MODULE_PATH:~/.local/share/refal-5-lambda/lib' >> $CONFIG
    CONFIG_UPDATED=true
  fi

  if "$CONFIG_UPDATED"; then
    echo $(date): Updated file $CONFIG, check if you need
  fi

  echo $(date): Installation finished
)
