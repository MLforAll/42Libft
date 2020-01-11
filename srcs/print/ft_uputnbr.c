/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:07:08 by kelian            #+#    #+#             */
/*   Updated: 2020/01/11 20:04:30 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

inline static void	ft_uputnbr_opts(char *buff, t_uint8 blen, t_uint16 opts)
{
	t_uint8	bshift;
	t_uint8	cnt;
	t_uint8	pad;

	if (opts & FT_UPUTNBR_ENDL)
	{
		buff[blen] = '\n';
		buff[++blen] = '\0';
	}
	if (!(pad = opts & FT_UPUTNBR_PADDING_MASK))
		return ;
	bshift = 0;
	cnt = blen;
	while (cnt++ % pad)
		bshift++;
	if (bshift == 0)
		return ;
	(void)ft_memmove((void *)((t_uintptr)buff + bshift--), buff, blen + 1);
	while (TRUE)
	{
		buff[bshift] = '0';
		if (bshift == 0)
			break ;
		bshift--;
	}
}

void				ft_uputnbr_unsigned(unsigned long long n, t_uint8 base, \
										const char *cs, t_uint16 opts)
{
	char	buff[sizeof(n) * 8 * 2 + 255];
	t_uint8	blen;

	blen = ft_untob_unsigned(buff, n, base, cs);
	if (opts != 0)
		ft_uputnbr_opts(buff, blen, opts);
	ft_putstr(buff);
}

/*
** Note: (unsigned long long)-n eq (unsigned long long)(~n + 1)
*/

void				ft_uputnbr(long long n, t_uint8 base, const char *cs, \
										t_uint16 opts)
{
	char	buff[sizeof(n) * 8 * 2 + 255];
	t_uint8	blen;

	blen = ft_untob(buff, n, base, cs);
	if (opts != 0)
		ft_uputnbr_opts(buff, blen, opts);
	ft_putstr(buff);
}
