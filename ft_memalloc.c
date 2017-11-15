/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 11:27:01 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/08 15:27:34 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int		*ret;
	size_t	i;

	ret = (int*)malloc(size);
	if (!ret)
		return (NULL);
	i = -1;
	while (++i < size)
		ret[i] = 0;
	return ((void*)ret);
}
