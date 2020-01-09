#!/usr/bin/gawk -f

# Usage: awk -f getrandomline.awk ../edited/Law\ notes.txt 
BEGIN{srand();}{a[NR]=$0}END{for(i=1; i<=1; i++){x=int(rand()*NR) + 1; print a[x];}}