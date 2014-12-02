# Usage : ls -l | awk -f ls.awk
BEGIN {
    total=0 
}
{ 
    print $9, $5;
    total=total+$5 
}
END {
    print total
}
