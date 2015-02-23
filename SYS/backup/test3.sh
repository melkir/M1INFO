#!/bin/sh
for var in $(seq 7); do
	echo -n "$var ... "
	t=$((2 * var + 20))
	echo $((t % 7 + 1))
done
echo DONE!