#!/bin/sh

clear
make fclean
echo "=========================="
make
echo "=========================="
./bsq < maps/42x42v
echo "=========================="
read
./tests.sh
