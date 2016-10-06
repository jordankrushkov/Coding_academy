#!/bin/bash

if [ ${#1} -lt 1 ]
then
    echo "Error."
    exit 
else
    echo "Home Directory: $HOME"
    echo "Default Shell $SHELL"
fi
	
