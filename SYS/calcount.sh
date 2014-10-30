#!/bin/sh

for (( mois = 1; mois < 13; ++mois )); do
	res=$(cal $mois 2014)
	echo $res | cut -2
	# Récupérer le dernier chiffre du mois
done
