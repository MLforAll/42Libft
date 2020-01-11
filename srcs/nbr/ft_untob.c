/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_untob.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:31:55 by kelian            #+#    #+#             */
/*   Updated: 2020/01/11 20:09:36 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_uint8	ft_untob(char *dst, long long n, t_uint8 base, const char *cs)
{
	char	*ptr;

	if (base == 10 && n < 0)
	{
		n = -n;
		*dst = '-';
		ptr = dst + 1;
	}
	else
		ptr = dst;
	return (ft_untob_unsigned(ptr, (unsigned long long)n, base, cs));
}
