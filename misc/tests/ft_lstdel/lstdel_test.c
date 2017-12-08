/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 15:20:55 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	del_f(void *content, size_t csize)
{
	free(content);
	content = NULL;
	csize = 0;
}

void	list_lst(t_list *lst)
{
	while (lst)
	{
		printf("content = %s | size = %li\n", (char*)lst->content,
				lst->content_size);
		lst = lst->next;
	}
}

int		main(void)
{
	t_list *lst;
	lst = ft_lstnew(strdup("YOLO"), 5);
	lst->next = ft_lstnew(strdup("SALUT"), 6);
	lst->next->next = ft_lstnew(strdup("ONTESTCA"), 9);
	printf("lst created\n");
	list_lst(lst);

	ft_lstdel(&(lst->next), &del_f);
	printf("\nlst modified\n");
	list_lst(lst);
	printf("lst->next = %p\n", lst->next);
	return (0);
}
