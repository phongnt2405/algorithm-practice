#!/bin/bash
rustc "$1" -o run && ./run && rm run
