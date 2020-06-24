/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 14:47:01 by kelian            #+#    #+#             */
/*   Updated: 2020/06/24 20:04:27 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef __APPLE__

#include <libkern/OSByteOrder.h>

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

#else

#include <stdlib.h>

void	ft_memswap(void *s, const char *fmt)
{
	(void)s;
	(void)fmt;
	ft_putendl_fd("UNSUPPORTED", 2);
	abort();
}

#endif
