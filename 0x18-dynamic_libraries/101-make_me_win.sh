#!/bin/bash
wget -P /tmp https://github.com/MonaaEid/alx-low_level_programming/blob/master/0x18-dynamic_libraries/mona.so
export LD_PRELOAD=/tmp/mona.so
