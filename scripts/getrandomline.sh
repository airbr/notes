head -$((${RANDOM} % `wc -l < ../edited/Law\ notes.txt` + 1)) ../edited/Law\ notes.txt | tail -n 1
