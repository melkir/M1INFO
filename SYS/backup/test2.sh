#!/bin/sh
filename="bash.string.txt"
stringZ=abcABC123ABCabc
echo ${#stringZ} #15
echo ${stringZ:7} #23ABCabc
echo ${stringZ:7:3} #23A
echo ${stringZ/abc/112} #123ABC123ABCabc
echo ${stringZ//abc/} #ABC123ABC
echo ${filename#*.} #string.txt
echo ${filename%.*} #bash.string
echo ${filename##*.} #txt
echo ${filename%%.*} #bash
echo ${filename^^} #BASH.STRING.TXT
echo ${filename^} #Bash.string.txt
echo ${filename,,} #bash.string.txt