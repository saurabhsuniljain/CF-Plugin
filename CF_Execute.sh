#!/bin/bash

g++ "$1"
cat "./input.txt" | "./a.out" > "./output.txt"