/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:50:21 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/15 14:56:16 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	if (!s || !(ret = ft_strnew((size_t)ft_strlen((char*)s))))
		return (NULL);
	while (s[i])
	{
		ret[i] = f(s[i]);
		i++;
	}
	return (ret);
}
