#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	char *ret = ft_itoa(atoi(av[1]));
	char *tocheck = strcmp(av[1], "-0") ? av[1] : "0";
	printf("ft_itoa(%s) = %s ", av[1], ret);
	printf("==> %s\n", !strcmp(ret, tocheck) ? "OK :D" : "FAIL :(");
	return (0);
}
