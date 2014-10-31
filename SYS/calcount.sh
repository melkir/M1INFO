#!/bin/sh

for (( mois = 1; mois < 13; ++mois )); do
	# On récupére les mois de l'année
	res=$(cal $mois 2014)
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
done
