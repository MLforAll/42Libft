#!/bin/sh

sdir=`dirname "$0"`

list="memset bzero memcpy memccpy memmove memchr memcmp strlen strdup strcpy strncpy strcat strncat strlcat strchr strrchr strstr strnstr strcmp strncmp atoi isalpha isdigit isalnum isascii isprint toupper tolower"
src_path="$sdir"/../srcs/fromc

sh "$sdir"/check_parts.sh "$src_path" "$list"
