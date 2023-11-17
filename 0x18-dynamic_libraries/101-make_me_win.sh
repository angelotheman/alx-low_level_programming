#!/bin/bash
cp /lib/x86_64-linux-gnu/libc.so.6 /tmp
export LD_PRELOAD=/tmp/libc.so.6
