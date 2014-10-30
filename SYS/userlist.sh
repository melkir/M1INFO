#!/bin/sh
# userlist.sh

PASSWD="/etc/passwd"

awk -F : '$3>=1000' $PASSWD
