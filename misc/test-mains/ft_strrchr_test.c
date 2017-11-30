#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	//char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char tochk = ' ';
	char *d1 = strrchr(src, tochk);
	char *d2 = ft_strrchr(src, tochk);

	printf("system = %s\nyours  = %s\n", d1, d2);
	if (d1 == d2)
		printf("SUCCESS!\n");
	else
		printf("FAILURE\n");
	return (0);
}
