#!/bin/bash

clang++ -std=c++1z -c -fmodules main.cpp -o main.o
# clang -std=c++1z -c -fmodules-ts mimpl.cpp -o mimpl.o
clang++ -std=c++1z -o  main.exe main.o  -lstdc++fs
# -fmodules -fmodules-cache-path=./cache 

# 
