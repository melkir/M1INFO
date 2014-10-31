#!/bin/sh

read -p "Choisir un mois (1-12) : " mouth
# On vérifie que le mois est bien compris entre 1 et 2
while [[ $mouth -lt 1 || $mouth -gt 12 ]]; do
	echo "$mouth n'est pas une valeur comprise entre 1 et 12"
	read -p "Choisir un mois (1-12) : " mouth
done
# On récupére les mois de l'année
res=$(cal $mouth 2014)
# On remplace les espaces par des /
res=$(echo $res | tr -s " " '/')
# On supprime la + longue chaîne en partant de la fin
# qui commence par / et qui se termine par *
# ex :/home/melkir/Documents ; /home (/melkir/Documents supprimé)
mouth=${res%%/*}
# On supprime la + longue chaîne en partant du début
# qui commence par * et qui se termine par /
# ex :/home/melkir/Documents ; Documents (/home/melkir supprimé)
day=${res##*/}
echo "Le mois de $mouth contient $day jours."
# Récupérer le dernier chiffre du mois
