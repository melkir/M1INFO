# Usage : awk -f gid.awk /etc/passwd
BEGIN {
	FS=":"
    nb=0
}
$4>=500
{
	nb += 1
}
END {
    print nb
}