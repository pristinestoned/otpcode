#!/bin/bash
if [ -f /usr/bin/cmake ]; then
echo Running CMake
cmake ./
else
echo You need to install CMake
echo Example: sudo apt install cmake
exit 0
fi
if [ -f /usr/bin/make ]; then
echo Running Makefile
make
else
echo You need to install Make
echo Example: sudo apt install make
fi
if [ -f ./genpass ]; then
echo Running install
sudo make install
fi
