#!/bin/bash
# test-fichier.sh

# Fonction d'affichage de l'aide pour l'utilisation du script
function Usage {
    echo "Usage: $0 <file>" 1>&2
    exit 1
}

# Verification du nombre d'arguments
if (( $# != 1 )); then Usage; fi

if [ ! -e $1 ]; then
    echo "$1 n\'est pas un fichier ou n\'existe pas"
    exit 1
fi

# Version simplifié de l'exercice
stat "$1"
