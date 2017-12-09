#!/bin/sh

sdir=`dirname "$0"`

list="itoa memalloc memdel putchar putchar_fd putendl putendl_fd putnbr putnbr_fd putstr putstr_fd strclr strdel strequ striter striteri strjoin strmap strmapi strnequ strnew strsplit strsub strtrim"
src_path="$sdir"/../srcs/supp

sh "$sdir"/check_parts.sh "$src_path" "$list"
