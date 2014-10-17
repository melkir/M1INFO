#!/bin/bash
# script4.sh
# menu interface with numbers

# Affichage du menu
echo -e "\n COMMAND MENU\n"
echo " 1. Lister le contenu du répertoire (\$ls -l)"
echo " 2. Lister les processus en cours d'exécution (ps aux)"
echo " 3. Afficher la date d'aujourd'hui (\$date)"
echo -e " 4. Quitter\n"
echo -n " Entrer un nombre (1-4): "
read answer
echo

# Description des actions du menu
case "$answer" in
1)
    ls -l
    ;;
2)
    ps aux
    ;;
3)
    date
    ;;
4)
    exit
    ;;
*)
    echo "There is no selection: $answer"
    ;;
esac
