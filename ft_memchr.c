/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:53:32 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:43:25 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sc;
	size_t			i;

	sc = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (sc[i] == (unsigned char)c)
			return (&sc[i]);
		i++;
	}
	return (NULL);
}
