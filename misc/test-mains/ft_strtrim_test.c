#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *s1 = "   \t  \n\n \t\t  \n\n\nHello \t  Please\n Trim me !\n   \n \n \t\t\n  ";
	char *s2 = "Hello \t  Please\n Trim me !";
	char *ret = ft_strtrim(s1);

	if (strcmp(ret, s2))
		printf("err!\n%s\n", ret);
	else
		printf("OK :D\n");
	return (0);
}
