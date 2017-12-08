#include <stdio.h>
#include "libft.h"
#include <string.h>

t_list *lstmap_f(t_list *m) {
	t_list *r = ft_lstnew("OK !", 5);
	(void)m;
	return (r);
}

void	test_ft_lstmap_basic(void) {

		t_list	*l = ft_lstnew(strdup(" 1 2 3 "), 8);
		t_list	*ret;

		l->next = ft_lstnew(strdup("ss"), 3);
		l->next->next = ft_lstnew(strdup("-_-"), 4);
		ret = ft_lstmap(l, lstmap_f);
		if (!strcmp(ret->content, "OK !") && !strcmp(ret->next->content, "OK !") && !strcmp(ret->next->next->content, "OK !") && !strcmp(l->content, " 1 2 3 ") && !strcmp(l->next->content, "ss") && !strcmp(l->next->next->content, "-_-"))
		{
			printf("SUCCESS!\n");
			return ;
		}
		printf("ERROR!\n");
}

int	main(void)
{
	test_ft_lstmap_basic();
	return (0);
}
