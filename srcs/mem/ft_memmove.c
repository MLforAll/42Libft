/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 22:39:12 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:24:55 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void			*bak;
	unsigned char	*cast;

	bak = dst;
	cast = (unsigned char*)dst;
	if (src < dst)
	{
		while (len--)
			cast[len] = ((unsigned char*)src)[len];
	}
	else
		ft_memcpy(cast, src, len);
	dst = cast;
	return (bak);
}
