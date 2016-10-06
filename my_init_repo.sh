#!/bin/bash
$1

if [ "$1"!="" ]; then
    
    /usr/bin/blih.py -u lordan.krouchkov@coding-academy.fr repository create $1
    /usr/bin/blih.py -u lordan.krouchkov@coding-academy.fr repository setacl $1 ramassage-tek r
    /usr/bin/blih.py -u lordan.krouchkov@coding-academy.fr repository setacl $1 gecko r

    git clone git@git.epitech.eu:/lordan.krouchkov@coding-academy.fr/$1

else
    exit 0
fi
    
exit 0
