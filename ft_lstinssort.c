/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinssort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 22:42:28 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/19 01:45:58 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	insert_elsewhere(t_list *bw, t_list *curr, \
	int (*cmp)(t_list *a, t_list *b))
{
	while (bw)
	{
		if (!bw->next || !cmp(curr, bw->next))
		{
			curr->next = bw->next;
			bw->next = curr;
			return ;
		}
		bw = bw->next;
	}
}

void		ft_lstinssort(t_list **alst, int (*cmp)(t_list *a, t_list *b))
{
	t_list	*ret;
	t_list	*curr;

	if (!*alst || !(*alst)->next)
		return ;
	ret = NULL;
	while (*alst)
	{
		curr = *alst;
		*alst = (*alst)->next;
		if (!ret || !cmp(curr, ret))
		{
			curr->next = ret;
			ret = curr;
		}
		else
			insert_elsewhere(ret, curr, cmp);
	}
	*alst = ret;
}
