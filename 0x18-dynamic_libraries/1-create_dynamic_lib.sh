#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC *.c
gcc -shared -o liball.so *.o
