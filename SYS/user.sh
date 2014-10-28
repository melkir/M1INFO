#!/bin/bash
# user.sh

# Fonction d'affichage de l'aide pour l'utilisation du script
function Usage {
    echo "Usage: $0 <username>" 1>&2
    exit 1
}

# Verification du nombre d'arguments
if (( $# != 1 )); then Usage; fi

# Recupère uniquement les premiers champs contenant $1
cat "/etc/passwd" | cut -d : -f 1 | grep "$1"
# On teste le resultat de la commande
if (($? == true)); then
	echo $(cat /etc/passwd | grep "$1")
else
	echo "L'utilisateur $1 n'existe pas"
fi