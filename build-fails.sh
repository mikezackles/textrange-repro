#!/bin/sh

clang++ -std=c++2a -I text/include -I range-v3/include \
  text/src/grapheme_break.cpp \
  text/src/line_break.cpp \
  main.cpp \
  -o repro
