#!/usr/bin/bash
gcc *.c -c -Wall -Werror -fpic
gcc *.o -shared -o liball.so

