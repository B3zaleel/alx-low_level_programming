#!/bin/bash
wget -q --output-document=$HOME/lib101-gm_overhaul.so https://github.com/B3zaleel/alx-low_level_programming/raw/main/0x18-dynamic_libraries/lib101-gm_overhaul.so
LD_PRELOAD=$HOME/lib101-gm_overhaul.so
