/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/03 23:35:56 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/04 00:56:08 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_nbrlen_base(long long nbr, int base)
{
	size_t		ret;

	ret = 1;
	nbr = (nbr < 0) ? -nbr : nbr;
	while (nbr >= base)
	{
		nbr /= base;
		ret++;
	}
	return (ret);
}
