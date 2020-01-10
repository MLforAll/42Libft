/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:07:08 by kelian            #+#    #+#             */
/*   Updated: 2020/01/10 18:41:49 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline static void	ft_uputnbr_opts(char *buff, t_uint8 blen, t_uint16 opts)
{
	t_uint8	swift;
	t_uint8	cnt;
	t_uint8	pad;

	cnt = blen;
	if (opts & FT_UPUTNBR_ENDL)
	{
		buff[blen] = '\n';
		buff[++blen] = '\0';
	}
	if (!(pad = opts & FT_UPUTNBR_PADDING_MASK))
		return ;
	swift = 0;
	while (cnt++ % pad)
		swift++;
	if (swift == 0)
		return ;
	(void)ft_memmove((void *)((t_uintptr)buff + swift--), buff, blen);
	while (TRUE)
	{
		buff[swift] = '0';
		if (swift == 0)
			break ;
		swift--;
	}
}

void				ft_uputnbr_unsigned(unsigned long long n, t_uint8 base, \
										const char *cs, t_uint16 opts)
{
	char	buff[sizeof(n) * 8 * 2 + 255];
	t_uint8	blen;

	ft_bzero(buff, sizeof(buff));
	blen = ft_untob(buff, n, base, cs);
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
	char	*ptr;
	t_uint8	blen;

	ft_bzero(buff, sizeof(buff));
	if (base == 10 && n < 0)
	{
		n = -n;
		*buff = '-';
		ptr = buff + 1;
	}
	else
		ptr = buff;
	blen = ft_untob(ptr, (unsigned long long)n, base, cs);
	if (opts != 0)
		ft_uputnbr_opts(ptr, blen, opts);
	ft_putstr(buff);
}
