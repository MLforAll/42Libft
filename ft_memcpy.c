/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:57:00 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:23:53 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*srcc;
	unsigned char	*dstc;
	void			*orig;
	int				i;

	srcc = (unsigned char*)src;
	dstc = (unsigned char*)dst;
	orig = dst;
	i = -1;
	while ((size_t)++i < n)
		dstc[i] = srcc[i];
	dst = dstc;
	return (orig);
}
