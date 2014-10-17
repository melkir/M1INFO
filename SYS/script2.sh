#!/bin/bash
# script2.sh
# Script qui prend en entrée le nom d'un fichier/répertoire, et qui retourne le résultat du test suivant :
# - Le fichier XYZ existe
# - Le fichier XYZ a la permission de lecture
# - Le fichier XYZ a la permission de modification

filename=$1
printname="Le fichier $filename"

if [ -e $filename ]; then 
    echo "$printname existe"
    if [ -r $filename ]; then 
        echo "$printname a la permission de lecture"
    fi
    
    if [ -w $filename ]; then
        echo "$printname a la permission de modification"
    fi
else
    echo "$filename n\'est pas un fichier ou n\'existe pas"
    exit 1
fi