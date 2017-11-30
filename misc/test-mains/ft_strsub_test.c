#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	if (ac < 4)
		return (1);
	printf("%s\n", ft_strsub(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
