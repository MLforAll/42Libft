/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untob_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:09:14 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/11 20:09:35 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint8	ft_untob_unsigned(char *dst, \
							unsigned long long n, \
							t_uint8 base, \
							const char *cs)
{
	t_uint8		idx;

	if (!cs)
		cs = HEX_CHARSET_UP;
	if (n == 0)
	{
		dst[0] = *cs;
		dst[1] = '\0';
		return (1);
	}
	idx = 0;
	while (n > 0)
	{
		dst[idx++] = cs[n % base];
		n /= base;
	}
	dst[idx] = '\0';
	(void)ft_memrev((void *)dst, idx);
	return ((t_uint8)idx);
}
