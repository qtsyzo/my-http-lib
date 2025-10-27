#!/bin/bash
g++ -shared -fPIC main.cpp -o libmyhttp.so -pthread
