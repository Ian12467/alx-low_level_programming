#!/bin/bash
wget -P /tmp/ https://raw.githubusercontent.com/Ian12467/alx-low_level_programming/main/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD=/tmp/libtest.so