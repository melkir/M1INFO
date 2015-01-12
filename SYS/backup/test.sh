#!/bin/sh

Usage(){
    echo "Usage: $0 <filename>"
    exit 1
}

# Si le nombre d'argument n'est pas correcte
if (( $# != 1 )); then Usage; fi

if [ ! -f $1 ]; then
    echo "Your need to specifie an file as argument"
fi

echo -n "Nombre de ligne blanches : "
echo $(grep '^$' $1 | wc -l)
echo -n "Nombre de ligne contenant + ou - de 3 car : "
echo $(grep -vx '.\{3\}' file.txt | wc -l)
echo -n "Ligne ne contenant pas le mot Unix : "
echo $(grep -vw "Unix" $1 | wc -l)
echo "Remplacement du mot Unix par Linux : "
sed "s/Unix/Linux/g" $1
echo "Suppression du dernier caractère de chaque ligne : "
sed -n 's/.$//p' $1
