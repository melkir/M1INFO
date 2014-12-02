# Usage : awk -f countchar.awk file
BEGIN {
	FS=""
}
{
	for(i=1; i<=NF; ++i) {
		if ($i ~ /[a-zA-Z]/) {
			w[tolower($i)]++
		}
	}
}
END {
	for(i in w) {
		print i, w[i]
	}
}
