/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:50:21 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/10 18:50:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	i = -1;
	if (!s)
		return (NULL);
	ret = ft_strnew((size_t)ft_strlen((char*)s));
	if (!ret)
		return (NULL);
	while (s[++i])
		ret[i] = f(i, s[i]);
	return (ret);
}
