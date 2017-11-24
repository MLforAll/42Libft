/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:46:01 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/10 21:42:48 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		nbrlen(long nbr)
{
	int		ret;

	ret = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		ret++;
		nbr /= 10;
	}
	return (ret);
}

static void		fill(char *str, long nbr)
{
	if (nbr > 9)
		fill(str - 1, nbr / 10);
	*str = nbr % 10 + '0';
}

char			*ft_itoa(int n)
{
	long	nl;
	int		len;
	char	*ret;

	nl = (long)n;
	len = nbrlen(nl) + (nl < 0);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	if (nl < 0)
	{
		nl = -nl;
		ret[0] = '-';
	}
	fill(ret + len - 1, nl);
	return (ret);
}
