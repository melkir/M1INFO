# Usage: awk -f nb.awk file.txt
BEGIN {
	FS="\t"
	min=22
	max=-1
}
$0 !~ /#/ {
	moy+=$2
	if($3 <= 10) inf_10_2++
	if($3 > 10) sup_10_2++
	if($2 < min) min = $2
	if($2 > max) max = $2
}
END {
	print "Moyenne pour SYS:", moy/(NR-1)
	print "Nb total étudiant:", NR-1
	print "Nb notes inf ou égal à 10 pour notes SSIC:", inf_10_2
	print "Nb notes supérieur à 10 pour notes SSIC:", sup_10_2
	print "La note minimale dans SYS", min
	print "La note maximale dans SYS", max
	print "L'écart note max note min est", max-min
}
