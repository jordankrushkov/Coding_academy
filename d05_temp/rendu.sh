#!/bin/bash

#rm *~

git add --all

#echo "Mets un commentaire pour le commit:"
#read comment
#git commit -am "$comment"
git commit -am "$1"

read -r -p "Faire le push également? [y/n]" response
if [[ $response =~ ^([yY][eE][sS]||[yY])$ ]]
then
    git push origin master
    exit 0
else 
    exit 0
fi

exit 0
