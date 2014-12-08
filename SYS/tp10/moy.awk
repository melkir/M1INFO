# Usage: awk -f moy.awk notes.txt
BEGIN {
	FS=";"
	OFS="\t"
	print "Prenom\tMoyenne\tMention"
}
($0 !~ /#/) {
	if ( ($3+$4+$5+$6+$7)/5 > 70 && $3 > 40 && $4 > 40 && $5 > 40 && $6 > 40 && $7 > 40 ) {
		print $1,$2,"Passable"
	} else {
		print $1,$2,"Ajourner"
	}
}
