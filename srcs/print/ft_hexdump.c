/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 18:32:07 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/01 18:46:03 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hexdump(void *ptr, size_t sz, const char *cs, t_uint8 nblock)
{
	t_uintptr	off;
	t_uint8		*byte;

	if (!cs)
		cs = HEX_CHARSET_LC;
	off = 0;
	while (off < sz)
	{
		byte = (t_uint8 *)((t_uintptr)ptr + off);
		if ((off % nblock) == 0)
		{
			if (off)
				ft_putchar('\n');
			ft_uputnbr_unsigned((t_uint64)byte, 16, cs, 8);
			ft_putchar('\t');
		}
		else
			ft_putchar(' ');
		ft_putchar(cs[*byte / 16]);
		ft_putchar(cs[*byte % 16]);
		off++;
	}
	ft_putchar('\n');
}
