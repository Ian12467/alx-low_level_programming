#!/bin/bash 
gcc -c *.c
ar rc liball.a *.o
rainlib liball.a

