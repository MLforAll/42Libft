#include <stdio.h>
#include "libft.h"

int	main(int ac, char **av)
{
#ifdef	__NOARGS__
	printf("%s\n\n", "string \x01 of \x63 non \x0a ascii \x12 chars\x1d");
	ft_putstr_fd("string \x01 of \x63 non \x0a ascii \x12 chars\x1d", 1);

#else
	if (ac < 3)
		return (1);
	ft_putstr_fd(av[1], atoi(av[2]));
#endif
	return (0);
}
