#!/bin/bash
clang++ -std=c++23 -o2 -Wall -Werror "$1" -o run && ./run && rm run 
