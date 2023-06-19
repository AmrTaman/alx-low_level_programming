#!/bin/bash
wget -O /tmp/libwin.so https://github.com/AmrTaman/alx-low_level_programming/blob/01572f274edcb67863f366ba68f44ea6d78a6a98/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
