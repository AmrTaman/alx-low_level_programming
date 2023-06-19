#!/bin/bash
wget -P /tmp https://github.com/AmrTaman/alx-low_level_programming/blob/09449688fd491b1493fe87148b5deda88849e84c/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=/tmp/libwin.so
