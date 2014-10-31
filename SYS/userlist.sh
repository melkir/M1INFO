#!/bin/sh
# userlist.sh

PASSWD="/etc/passwd"

awk -F : '$3>=1000 {print "User: "$1 " - UID: "$3}' $PASSWD
