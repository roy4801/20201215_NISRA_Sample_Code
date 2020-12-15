#!/bin/bash

for i in *; do
    if [[ "${i##*.}" == "c" ]]; then
        gcc -o ${i%.*} ${i}
    fi
done