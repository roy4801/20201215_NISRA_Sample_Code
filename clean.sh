#!/bin/bash

for i in *; do
    if [[ "${i##*.}" == "${i}" ]]; then
        rm -f "${i}"
    fi
done