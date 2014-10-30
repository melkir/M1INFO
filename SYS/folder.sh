#!/bin/sh
# folder.sh

Usage() {
    echo "Usage : $0 <dirPath>"
    exit 1
}

#if (( $# == 0 )); then Usage; fi

if [[ ! -d $1 || $# -eq 0 ]]; then Usage; fi

for file in $1*; do
	if [[ -d $file ]]; then
		echo "$file est un dossier";
	else
		echo $file "contient" $(cat $file | wc -l) "lignes"
	fi
done
