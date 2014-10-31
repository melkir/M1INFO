#!/bin/bash
# script3.sh
# menu interface to simple commands

# Affichage du menu
echo -e "\n COMMAND MENU\n"
echo " a. Current date and time"
echo " b. Users currently logged in"
echo " c. Name of the working directory"
echo -e " d. Contents of the working directory\n"
echo -n "Enter a, b, c, or d: "
read answer
echo

# Description des actions du menu
case "$answer" in
a)
    date
    ;;
b)
    who
    ;;
c)
    pwd
    ;;
d)
    ls
    ;;
*)
    echo "There is no selection: $answer"
    ;;
esac
