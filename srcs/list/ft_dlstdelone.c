/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:05:18 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/19 11:59:02 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_dlstdelone(t_dlist **alist, void (*del)(void *, size_t))
{
	if (!alist || !*alist)
		return ;
	del((*alist)->content, (*alist)->content_size);
	free(*alist);
	*alist = NULL;
}
