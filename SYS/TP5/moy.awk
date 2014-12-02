# Usage: awk -f moy.awk file.txt
BEGIN {
	FS="\t"
	OFS="\t"
	print "Prenom\tMoyenne"
}
$0 !~ /#/ {
	print $1, ($2+$3)/2
}
