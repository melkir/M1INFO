#!/bin/bash
# boucle.sh

# Fonction d'affichage de l'aide pour l'utilisation du script
function Usage {
    echo "Usage: $0 <start value> <end value> <increment value>" 1>&2
    exit 1
}

# Verification du nombre d'arguments
if (( $# > 3 )); then Usage; fi

# Définition des valeurs par défaut
deb=${1:-1}
fin=${2:-30}
inc=${3:-1}

for (( i = deb; i < fin; i+=inc )); 
	do echo "X+${i}I"
done
echo "Y"