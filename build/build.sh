#!/bin/bash
# rm CMakeCache.txt
cmake ..
# debug模式
# cmake --build ..
# release模式
# cmake --build .. -- /p:Configuration=Release
make
