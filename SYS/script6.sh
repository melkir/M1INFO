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

# echo $(cat $1 | grep $USER | cut -d : -f 1,7)
# passwd ne contenant pas de login de l'utilisateur courant, j'ai choisi de prendre etu
echo $(cat "$1" | grep etu | cut -d : -f 1,7)
