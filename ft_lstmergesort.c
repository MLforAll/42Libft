/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmergesort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 20:30:02 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/18 22:31:41 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*get_middle(t_list *lst)
{
	t_list	*fast;
	t_list	*ret;
	int		i;

	if (!lst)
		return (NULL);
	fast = lst->next;
	ret = lst;
	i = 0;
	while (fast)
	{
		fast = fast->next;
		if (i)
			ret = ret->next;
		i = !i;
	}
	return (ret);
}

static void		split_lst(t_list *lst, t_list **side_a, t_list **side_b)
{
	t_list	*middle;

	if (!lst || !lst->next)
	{
		*side_a = lst;
		*side_b = NULL;
		return ;
	}
	middle = get_middle(lst);
	*side_a = lst;
	*side_b = middle->next;
	middle->next = NULL;
}

static t_list	*merge_lists(t_list *a, t_list *b, int (*cmp)(t_list*, t_list*))
{
	t_list	*ret;

	if (!a && !b)
		return (NULL);
	else if (!a)
		return (b);
	else if (!b)
		return (a);
	if (!cmp(a, b))
	{
		ret = a;
		ret->next = merge_lists(a->next, b, cmp);
	}
	else
	{
		ret = b;
		ret->next = merge_lists(a, b->next, cmp);
	}
	return (ret);
}

void			ft_lstmergesort(t_list **lst, int (*cmp)(t_list*, t_list*))
{
	t_list	*side_a;
	t_list	*side_b;

	if (!*lst || !(*lst)->next)
		return ;
	split_lst(*lst, &side_a, &side_b);
	ft_lstmergesort(&side_a, cmp);
	ft_lstmergesort(&side_b, cmp);
	*lst = merge_lists(side_a, side_b, cmp);
}
