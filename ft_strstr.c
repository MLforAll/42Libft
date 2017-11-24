/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:44:11 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:33:59 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *big, const char *find)
{
	int		i;
	size_t	p;
	int		start;

	i = -1;
	p = 0;
	if (!find[0])
		return ((char*)big);
	while (big[++i])
	{
		if (big[i] == find[p])
		{
			if (p++ == 0)
				start = i;
			if (p == ft_strlen((char*)find))
				return ((char*)&big[start]);
		}
		else
		{
			if (p > 0)
				i = start;
			p = 0;
		}
	}
	return (NULL);
}
