/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:07:08 by kelian            #+#    #+#             */
/*   Updated: 2019/04/27 14:55:09 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_uputnbr_unsigned(unsigned long long n, t_uint8 base)
{
	char	buff[sizeof(n) * 8 * 2];

	ft_bzero(buff, sizeof(buff));
	(void) ft_untob(buff, n, base);
	ft_putendl(buff);
}

/*
** Note: (unsigned long long)-n eq (unsigned long long)(~n + 1)
*/

void	ft_uputnbr(long long n, t_uint8 base)
{
	char	buff[sizeof(n) * 8 * 2];
	char	*ptr;

	ft_bzero(buff, sizeof(buff));
	if (base == 10 && n < 0)
	{
		n = -n;
		*buff = '-';
		ptr = buff + 1;
	}
	else
		ptr = buff;
	(void) ft_untob(ptr, (unsigned long long)n, base);
	ft_putendl(buff);
}
