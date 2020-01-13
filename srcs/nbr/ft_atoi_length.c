/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 17:57:21 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/13 18:58:11 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline static int	is_whitespace(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' \
			|| c == '\r'));
}

int					ft_atoi_length(const char *str, ssize_t sz)
{
	t_uint8			neg;
	unsigned int	i;
	long long		ret;

	i = 0;
	ret = 0;
	while ((i < sz || sz < 0) && str[i] != '+' && str[i] != '-' \
		&& is_whitespace(str[i]))
		i++;
	if ((i >= sz && sz >= 0) || !str[i])
		return (0);
	neg = (str[i] == '-');
	if (!ft_isdigit(str[i]))
	{
		if (str[i] != '+' && !neg)
			return (0);
		i++;
	}
	while ((i < sz || sz < 0) && ft_isdigit(str[i]))
		ret = ret * 10 + str[i++] - '0';
	if (neg)
		ret = -ret;
	return ((int)ret);
}
