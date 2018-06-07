#!/bin/bash

rm -r cmake-build-debug
mkdir cmake-build-debug
cd cmake-build-debug
PATH=$PATH:/Applications/CMake.app/Contents/bin
echo $PATH
cmake ..
