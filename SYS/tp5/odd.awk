# Usage : awk -f odd.awk /etc/passwd
BEGIN {
    print " --- Debut du traitement AWK ---"
    FS=":"
}
{
    for(i=1; i<=NF;++i)
        if (i%2 != 0)
            printf $i" "
        print "\n"
}
END {
    print "--- Fin du traitement AWK ---"
}
