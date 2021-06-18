#!/bin/sh
cat /etc/passwd | grep -v '^#' | -v FT_LINE1="$FT_LINE1" -v FTLINE2="$FT_LINE2" 'BEGIN {NR>2 NR%2==1 NR>=FT_LINE1 NR<=FT_LINE2 print $1}' | rev | sort -r | sed -e 's|\n|, |' | cut -d -1 | echo "." 
