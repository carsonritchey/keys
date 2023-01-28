#!/bin/bash

mkdir build
cd build
rm keys
cmake ../
make
cd ..
./build/keys
