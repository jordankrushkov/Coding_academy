#!/bin/bash

#Prends les paramètres nom de fichier, mot à remplacer, mot de remplacement

sed -i "s/$2/$3/g" $1

exit
