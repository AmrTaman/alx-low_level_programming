#!/bin/bash
wget -P /tmp https://github.com/AmrTaman/alx-low_level_programming/blob/03bfe29d60a11f556a83e063fcaf745989738ed3/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
