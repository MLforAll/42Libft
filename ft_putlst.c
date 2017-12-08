/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:05:02 by kdumarai          #+#    #+#             */
/*   Updated: 2017/12/08 21:29:18 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlst(t_list *lst)
{
	while (lst)
	{
		if (lst->content)
			ft_putendl((char*)lst->content);
		lst = lst->next;
	}
}
