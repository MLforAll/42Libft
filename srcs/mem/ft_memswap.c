/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 14:47:01 by kelian            #+#    #+#             */
/*   Updated: 2019/12/31 02:59:03 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libkern/OSByteOrder.h>
#include "libft.h"

void	ft_memswap(void *s, const char *fmt)
{
	while (TRUE)
	{
		if (*fmt == 'w')
		{
			*(t_int16 *)s = OSSwapInt16(*(t_int16 *)s);
			s += sizeof(t_int16);
		}
		else if (*fmt == 'd')
		{
			*(t_int32 *)s = OSSwapInt32(*(t_int32 *)s);
			s += sizeof(t_int32);
		}
		else if (*fmt == 'q')
		{
			*(t_int64 *)s = OSSwapInt64(*(t_int64 *)s);
			s += sizeof(t_int64);
		}
		else
			s += sizeof(char) * (ft_isdigit(*fmt) ? ft_atoi(fmt) : 1);
		if (!(fmt = ft_strchr(fmt, ';')))
			break ;
		fmt++;
	}
}
