#!/bin/sh
# backup.sh

for file in *; do
	if [[ ${0#./} == "$file" ]]; then continue; fi
	mv "$file" "$file".bak
done
