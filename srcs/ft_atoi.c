/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:29:26 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/11 15:36:15 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_whitespace(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
				|| c == '\r'));
}

int				ft_atoi(const char *str)
{
	int		i;
	int		neg;
	long	ret;

	i = 0;
	ret = 0;
	while (str[i] != '+' && str[i] != '-' && is_whitespace(str[i]))
		i++;
	neg = (str[i] == '-');
	if (ft_isdigit(str[i]))
		i--;
	else if (str[i] != '+' && !neg)
		return (0);
	while (ft_isdigit(str[++i]))
		ret = ret * 10 + str[i] - '0';
	if (neg)
		ret = -ret;
	return (ret);
}
