#!/bin/sh
# taille.sh

# Fonction d'affichage de l'aide pour l'utilisation du script
function Usage {
    echo "Usage: $0 <filename>" 1>&2
    exit 1
}

# Check number of arguments
if (( $# != 1 )); then Usage; fi

if [ ! -e $1 ]; then
    echo "$1 n\'est pas un fichier ou n\'existe pas"
    exit 1
fi

# With tr command (not needed)
#echo $(ls -l "$1" | tr " " ";" | cut -f 5 -d ";")
# Without tr command
echo $(ls -l "$1" | cut -f 5 -d " ")
