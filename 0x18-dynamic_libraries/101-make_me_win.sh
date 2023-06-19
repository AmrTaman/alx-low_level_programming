#!/bin/bash
wget https://raw.githubusercontent.com/AmrTaman/alx-low_level_programming/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=$(pwd)/libwin.so
