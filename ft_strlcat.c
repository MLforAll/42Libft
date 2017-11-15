/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:19:28 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:31:35 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	p;

	i = ft_strlen(dst);
	p = 0;
	if (size < i)
		return (i + ft_strlen((char*)src) - (i - size));
	while (src[p] && p < size - i - 1)
	{
		dst[i + p] = src[p];
		p++;
	}
	dst[i + p] = '\0';
	return (i + ft_strlen((char*)src));
}
