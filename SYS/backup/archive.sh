#!/bin/sh

showMenu() {
	echo "1) Créer le fichier backup.tar.gz"
	echo "2) Extraire les fichiers de l'archive backup.tar.gz"
	echo "3) Créer le fichier backup.tar.bz2"
	echo "4) Extraire les fichiers de l'archive backup.tar.bz2"
	echo "5) exit"
	echo -n "Entrer votre choix (1-5) : "
}

dstfile="$HOME/backup/"
showMenu
while read -r; do
	case $REPLY in
		1)
			tar -cvzf "backup.tar.gz" $dstfile
			;;
		2)
			tar -xvzf "backup.tar.gz"
			;;
		3)
			tar -cvjf "backup.tar.bz2" $dstfile
			;;
		4)
			tar -xvjf "backup.tar.bz2"
			;;
		5 | 'q')
			exit
			;;
		*)
			echo "Bad argument"
	esac
	showMenu
done