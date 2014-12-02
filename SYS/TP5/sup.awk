# Usage : awk -f sup.awk file.txt
BEGIN {
	FS="\t"
	print "Prenom\tNOTE SYS"
}
($3>10) && ($0 !~ /#/){
	print $1,$2
}
