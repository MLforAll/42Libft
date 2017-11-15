/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:57:00 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:24:36 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*srcc;
	unsigned char	*dstc;
	size_t			i;

	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		if (srcc[i] == (unsigned char)c)
		{
			dst = dstc;
			return (&dstc[i + 1]);
		}
		i++;
	}
	dst = dstc;
	return (NULL);
}
