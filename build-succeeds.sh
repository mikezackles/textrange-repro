#!/bin/sh

clang++ -std=c++2a -I my-text/include -I range-v3/include \
  my-text/src/grapheme_break.cpp \
  my-text/src/line_break.cpp \
  main.cpp \
  -o repro
