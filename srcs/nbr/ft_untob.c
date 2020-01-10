/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:31:55 by kelian            #+#    #+#             */
/*   Updated: 2020/01/10 18:56:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint8	ft_untob(char *dst, unsigned long long n, t_uint8 base, const char *cs)
{
	t_uint8		idx;

	if (!cs)
		cs = HEX_CHARSET_UP;
	if (n == 0)
	{
		*dst = *cs;
		return (1);
	}
	idx = 0;
	while (n > 0)
	{
		dst[idx++] = cs[n % base];
		n /= base;
	}
	(void)ft_memrev((void *)dst, idx);
	return ((t_uint8)idx);
}
