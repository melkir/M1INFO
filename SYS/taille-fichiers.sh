#!/bin/sh
# taille.sh

for file in ./*
do
    echo "$file" $(stat -c%s "$file")
done