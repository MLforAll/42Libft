#!/bin/sh

WHITECLR="\033[0;37m"
REDCLR="\033[0;31m"
ORANGECLR="\033[0;33m"
GREENCLR="\033[0;32m"

list="$2"
for src in $list
do
	fp="$1"/ft_$src.c
	if [ ! -f "$fp" ]; then
		if [ -f "$1/$src.c" ]; then
			echo "$src present but with wrong filename!"
			echo "$src.c -> ft_$src.c"
		else
			echo "${REDCLR}Missing: ${WHITECLR}$src"
		fi
	elif [ "$1" != "missing" ]; then
		echo "${GREENCLR}Present: ${WHITECLR}$src"
		if [ "`norminette $fp | grep -v Norme:`" != "" ]; then
			echo "${REDCLR}Error: ${WHITECLR}ft_$src.c: norminette fail!"
		fi
		if [ "$(grep "#include \"libft.h\"" $fp)" == "" ]; then
			echo "${ORANGECLR}Warning: ${WHITECLR}ft_$src.c: libft.h not included!"
		fi
	fi
done
