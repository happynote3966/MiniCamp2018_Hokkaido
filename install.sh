#!/bin/sh

sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install -y vim
sudo apt-get install -y libc6:i386
sudo apt-get install -y gcc-multilib
