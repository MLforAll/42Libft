/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:44:11 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/14 03:49:07 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *find)
{
	unsigned long	i;
	size_t			p;
	unsigned long	start;

	i = 0;
	p = 0;
	start = 0;
	if (!find[0])
		return ((char*)((uintptr_t)big));
	while (big[i])
	{
		if (big[i] == find[p])
		{
			(p++ == 0) ? start = i : 0;
			if (p == ft_strlen(find))
				return ((char*)((uintptr_t)big + start));
		}
		else
		{
			(p > 0) ? i = start : 0;
			p = 0;
		}
		++i;
	}
	return (NULL);
}
