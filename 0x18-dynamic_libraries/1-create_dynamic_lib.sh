#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c *.c
gcc *.o -shared -o liball.so
export  LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
