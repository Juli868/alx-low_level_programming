#!/bin/bash
gcc -c *.c
gcc *.o -shared -o liball.so
export  LD_LIBRARY_PATH=.
