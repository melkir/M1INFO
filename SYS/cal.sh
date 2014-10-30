#!/bin/sh
# cal.sh

[[ -z $1 ]] && read -p "1ère opérande : " -n 1 val1 && echo
[[ -z $2 ]] && read -p "Opérateur : " -n 1 -r op && echo
[[ -z $3 ]] && read -p "2ème opérande : " -n 1 val2 && echo

VAL1=${1:-$val1}
OP=${2:-$op}
VAL2=${3:-$val2}

echo $(($VAL1 $OP $VAL2))
