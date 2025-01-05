#!/bin/bash

flgs="-lraylib -static-libgcc -static-libstdc++ -lopengl32 -lgdi32 -lwinmm -mwindows -pthread"

x86_64-w64-mingw32-g++ -std=c++23 -o igl.exe ../sources/main.cpp ../sources/HighLevelUtils.cpp -I../Thirds/raylib/include -L../Thirds/raylib/lib $flgs