#!/bin/bash
# script6.sh
# Affiche le login et le shell par défaut de l'utilisateur courant.

# Verification des arguments
if [ $# != 1 ]; then
    echo "Bad argument number"
    exit 1
fi

if [ ! -e "$1" ]; then
    echo "File $1 not found" 1>&2
    exit 1
fi

echo $(cut -d : -f 1,7 "$1" | grep $USER)

