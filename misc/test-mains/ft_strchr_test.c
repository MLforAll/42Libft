#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char tochk = 't';
	char *d1 = strchr(src, tochk);
	char *d2 = ft_strchr(src, tochk);

	printf("d1 = %s\nd2 = %s\n", d1, d2);
	if (d1 == d2)
		printf("SUCCESS!\n");
	else
		printf("FAILURE\n");
	return (0);
}
