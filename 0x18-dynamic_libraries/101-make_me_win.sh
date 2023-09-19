#!/bin/bash
wget -P /tmp https://github.com/MonaaEid/alx-low_level_programming/blob/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/gm.so
