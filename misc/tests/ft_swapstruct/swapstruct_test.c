#include "libft.h"
#include <stdio.h>

struct test_s
{
	t_uint32 m1;
	t_uint16 m2;
	char m3[8];
	t_uint64 m4;
};

static void print_s(struct test_s *t)
{
	(void) printf("%u\n%hu\n%s\n%lu\n", t->m1, t->m2, t->m3, t->m4);
}

int	main(void)
{
	struct test_s t = {42, 21, "welco", 101};

	print_s(&t);
	(void) puts("\n== swap ==\n");
	ft_swapstruct(&t, "dw8q");
	print_s(&t);
	return 0;
}
