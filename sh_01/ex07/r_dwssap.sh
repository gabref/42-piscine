#!/bin/sh
# read the /etc/passwd content
# invert sense of matching, grep all non comments
# select only every 2 lines
# separator :, extract the first field
# reverse the logins
# sort in reverse alphabetic order
# select between ftlines

FT_LINE1=2
FT_LINE2=8

cat /etc/passwd | \
  grep -v '^#' | \
  awk 'NR % 2 == 0' | \
  awk -F':' '{print $1}' | \
  rev | \
  sort -r | \
  awk -v FT_START="$FT_LINE1" -v FT_END="$FT_LINE2" 'NR >= FT_START && NR <= FT_END' | \
  tr '\n' ', ' | \
  sed 's/,$/./'
