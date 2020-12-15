#!/bin/bash

for i in *; do
    if [[ "${i##*.}" == "c" ]]; then
        gcc -o ${i%.*} ${i}
    fi
done

gcc -m32 -fno-stack-protector -o basic_overflow basic_overflow.c