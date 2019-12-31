/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memintcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 14:41:42 by kdumarai          #+#    #+#             */
/*   Updated: 2019/12/31 14:43:55 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memintcpy(const char sf, const char df, const void *s, void *d)
{
	t_uint64	val;

	val = 0;
	if (sf == 'c')
		val = *(const t_uint8 *)s;
	else if (sf == 'w')
		val = *(const t_uint16 *)s;
	else if (sf == 'd')
		val = *(const t_uint32 *)s;
	else if (sf == 'q')
		val = *(const t_uint64 *)s;
	if (df == 'c')
		*(t_uint8 *)d = (t_uint8)val;
	else if (df == 'w')
		*(t_uint16 *)d = (t_uint16)val;
	else if (df == 'd')
		*(t_uint32 *)d = (t_uint32)val;
	else if (df == 'q')
		*(t_uint64 *)d = val;
	return (d);
}
