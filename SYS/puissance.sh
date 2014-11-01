#!/bin/sh
# puissance.sh

Usage() {
	echo "Usage: $0 <puissance>"
	exit 1
}

if [ $# -ne 1 ]; then Usage; fi

if [[ $1 -gt 12 ]]; then
	echo "La nombre doit être compris entre 1 et 12"
	exit 1
fi

max=1
# Calcul de la valeur max = 2^n
for (( i = 0; i < $1; ++i )); do ((max*=2)); done

min=1
# Génération de 10 valeurs comprises entre 1 et max
for (( i = 0; i < 10; i++ )); do
	list[i]=$[($RANDOM % ($[$max - $min] + 1)) + $min]
done

echo ${list[*]}
