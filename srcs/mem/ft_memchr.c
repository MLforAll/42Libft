/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:53:32 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/14 02:55:00 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sc;
	size_t				i;

	sc = (const unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return ((void*)((uintptr_t)sc + i));
		i++;
	}
	return (NULL);
}
