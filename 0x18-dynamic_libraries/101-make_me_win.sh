#!/bin/bash
wget -P /tmp https://github.com/emmanueladdo/alx-low_level_programming/blob/master/0x18-dynamic_libraries/icrack.so
export LD_PRELOAD=/tmp/icrack.so
