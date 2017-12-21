[ -n "$CPPLINEE" ] && return 0

CONFIG_FILE=$1/c-plus-plus.conf.sh
[ -e "$CONFIG_FILE" ] || cp $1/scripts/c-plus-plus.conf.sh.template "$CONFIG_FILE"
. $CONFIG_FILE

[ -n "$CPPLINEE" ] && return 0

if [ -e $1/../c-plus-plus.conf.sh ]; then
  . $1/../c-plus-plus.conf.sh
fi

[ -n "$CPPLINEE" ] && return 0
echo C++ compiler is not selected, please edit file c-plus-plus.conf.sh
return 1
