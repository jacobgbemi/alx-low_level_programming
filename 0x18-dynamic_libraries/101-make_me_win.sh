#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/jacobgbemi/alx-low_level_programming/tree/main/0x18-dynamic_libraries/libmyprintf.so
export LD_PRELOAD=/tmp/libmyprintf.so
