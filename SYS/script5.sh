#!/bin/bash
# script5.sh

# Verification des arguments
if [ $# != 1 ]; then
    echo "Nombre d'arguments incorrect"
    exit 1
fi

if [ ! -e $1 ]; then
    echo "$1 n\'est pas un fichier ou n\'existe pas"
    exit 1
fi

# Transforme les lettres du fichiers en majuscule
echo $(cat $1 | tr a-z A-Z) > $1
