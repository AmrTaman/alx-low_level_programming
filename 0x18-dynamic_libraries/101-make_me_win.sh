#!/bin/bash
wget -O /tmp/libwin.so https://raw.githubusercontent.com/AmrTaman/alx-low_level_programming/main/0x18-dynamic_libraries/calc.c
export LD_PRELOAD=/tmp/libwin.so
