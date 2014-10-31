#!/bin/sh
# factorielle.sh

# Verification du nombre d'arguments
[ $# -ne 1 ] && { echo "Usage: $0 <number>"; exit 1; }

# fact(0) = 1
[ $1 -eq 0 ] && { echo 1; exit 0; }

res=0
for i in `seq 1 $1`; do
	((res += i))
done
echo "fact($1) = $res"
