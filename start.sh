#!/bin/bash

swig -c++ -javascript -node mylib.i
node-gyp build
node index.js
