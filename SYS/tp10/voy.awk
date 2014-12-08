# Usage : awk -f voy.awk file.txt
$0 !~ /[aeiouy]/ {
    ++nb
}
END {
    print "Nombre de ligne ne contenant pas de voyelle:",nb
}
