/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:31:55 by kelian            #+#    #+#             */
/*   Updated: 2019/04/27 14:55:10 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define HEX_CHARSET	"0123456789ABCDEF"

t_uint8	ft_untob(char *dest, unsigned long long n, t_uint8 base)
{
	short	idx;
	t_uint8 ret;
	t_uint8 tmp[sizeof(n) * 8 * 2];

	if (n == 0)
	{
		*dest = *HEX_CHARSET;
		return (1);
	}
	idx = 0;
	while (n > 0)
	{
		tmp[idx++] = n % base;
		n /= base;
	}
	ret = (t_uint8)idx;
	while (--idx > -1)
		*(dest++) = HEX_CHARSET[tmp[idx]];
	return (ret);
}

#undef HEX_CHARSET
