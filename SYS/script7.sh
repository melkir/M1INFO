#!/bin/bash
# script7.sh
# Copie de fichier

# Fonction d'affichage de l'aide pour l'utilisation du script
function Usage {
    echo "Usage: $0 <filesrc> <filedst>" 1>&2
    exit 1
}

# Verification des arguments
if [ $# != 2 ]; then 
	Usage 
fi

if [ ! -e $1 ]; then
    echo "Source file $1 not found" 1>&2
fi

# Copie du contenu du fichier source dans le fichier destination
echo $(cat $1) > $2