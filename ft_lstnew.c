/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:01:52 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/17 16:00:46 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		lst->content = ft_memalloc(content_size);
		ft_memmove(lst->content, content, content_size);
	}
	else
		lst->content = NULL;
	lst->content_size = (!content) ? 0 : content_size;
	lst->next = NULL;
	return (lst);
}
