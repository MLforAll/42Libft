/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:31:55 by kelian            #+#    #+#             */
/*   Updated: 2019/12/30 17:28:01 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define HEX_CHARSET	"0123456789ABCDEF"

t_uint8	ft_untob(char *dst, unsigned long long n, t_uint8 base, const char *cs)
{
	short		idx;
	t_uint8		ret;
	t_uint8		tmp[sizeof(n) * 8 * 2];
	const char	*ics;

	ics = (cs) ? cs : HEX_CHARSET;
	if (n == 0)
	{
		*dst = *ics;
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
		*(dst++) = ics[tmp[idx]];
	return (ret);
}

#undef HEX_CHARSET
