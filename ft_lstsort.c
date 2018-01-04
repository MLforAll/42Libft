/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 06:07:34 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/04 06:14:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstsort(t_list **lst, int (*cmp)(t_list*, t_list*))
{
	t_list	*curr;
	t_list	*prev;
	t_list	*tmp;

	curr = *lst;
	while (curr->next)
	{
		prev = (curr == *lst) ? NULL : prev;
		if (cmp(curr, curr->next))
		{
			if (prev)
				prev->next = curr->next;
			else
				*lst = curr->next;
			tmp = curr->next->next;
			curr->next->next = curr;
			curr->next = tmp;
			curr = *lst;
		}
		else
		{
			prev = curr;
			curr = curr->next;
		}
	}
}
