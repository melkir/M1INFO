#!/bin/bash
# math.sh

while [[ $num1 != "exit" ]]; do
	read -p "Entrer deux variable (exit pour quitter) : " num1 num2
	(( $num1 + $num2 ))
	(( $num1 * $num2 ))
	(( $num1 / $num2 ))
	(( $num1 - $num2 ))
done
