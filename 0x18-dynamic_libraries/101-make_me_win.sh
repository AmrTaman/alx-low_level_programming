#!/bin/bash
wget -O /tmp/libwin.so https://github.com/AmrTaman/alx-low_level_programming/blob/main/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
