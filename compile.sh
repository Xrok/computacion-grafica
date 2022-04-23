#!/bin/bash
g++ -std=c++14 *.cpp -o main -I /opt/X11/include -L /opt/X11/lib -lX11 -ljpeg -lpng -lz
./main