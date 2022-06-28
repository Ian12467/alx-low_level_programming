#!/bin/bash
gcc -c *.c
ar rc libll.a *.o
ranlib liball.a

