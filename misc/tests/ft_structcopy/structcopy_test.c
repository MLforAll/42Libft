#include <stdio.h>
#include <stdint.h>
#include "libft.h"

struct a
{
	uint32_t m1;
	uint16_t m2;
	uint32_t m4;
};

struct b
{
	uint64_t m1;
	uint32_t m2;
	uint64_t m4;
};

inline static void
print_structs(struct a *s, struct b *s2)
{
	(void) printf("a: %u; %u; %u\n", s->m1, s->m2, s->m4);
	(void) printf("b: %llu; %u; %llu\n", s2->m1, s2->m2, s2->m4);
}

int
main(void)
{
	struct a src = {42, 21, 101};
	struct b dst = {};

	print_structs(&src, &dst);
	(void) puts("\n== copy ==\n");
	(void) ft_structcopy(&src, "d;w;d", &dst, "q;d;q");
	print_structs(&src, &dst);
	return 0;
}
