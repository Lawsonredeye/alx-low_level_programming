#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -fPIC
gcc -shared -o liball.so *.o