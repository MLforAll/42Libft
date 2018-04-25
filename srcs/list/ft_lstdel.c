/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:09:51 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/20 05:00:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*bak;

	if (!alst || !del)
		return ;
	tmp = (*alst);
	while (tmp)
	{
		bak = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = bak;
	}
	*alst = NULL;
}
