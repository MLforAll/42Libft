#include <stdio.h>
#include <stdint.h>
#include "libft.h"

struct test_s
{
	uint32_t m1;
	uint16_t m2;
	char m3[18];
	uint64_t m4;
};

inline static void
print_s(struct test_s *t)
{
	(void) printf("%u\n%u\n%s\n%llu\n", t->m1, t->m2, t->m3, t->m4);
}

int
main(void)
{
	struct test_s t = {42, 21, "welco", 101};

	print_s(&t);
	(void) puts("\n== swap ==\n");
	ft_memswap((void *)&t, "d;w;18;q");
	print_s(&t);
	return 0;
}
