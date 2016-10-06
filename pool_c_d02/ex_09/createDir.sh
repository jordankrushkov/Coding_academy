#!/bin/bash

counter=1
while [ $counter -le $1 ]
do
    if [ $counter -lt 10 ]
    then
	mkdir -p "ex_0"$counter
    else
	mkdir -p "ex_"$counter
    fi
    ((counter++))
done
