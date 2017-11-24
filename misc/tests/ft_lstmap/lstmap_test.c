/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 14:02:01 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

t_list	*chg_content(t_list *elem)
{
	t_list	*new;
	
	if (!(new = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	new->content = strdup("OK !");
	new->content_size = 5;
	return (new);
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
	printf("list created\n");
	list_lst(lst);

	t_list *newlst = ft_lstmap(lst, &chg_content);
	printf("\nnewlist created\n");
	list_lst(newlst);
	printf("orig lst:\n");
	list_lst(lst);
	return (0);
}
