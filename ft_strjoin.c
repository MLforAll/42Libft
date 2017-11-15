/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 19:41:45 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/10 19:04:57 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	p;
	char	*ret;

	i = -1;
	p = -1;
	if (!s1 || !s2)
		return (NULL);
	ret = ft_strnew((size_t)(ft_strlen((char*)s1) + ft_strlen((char*)s2)));
	if (!ret)
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	while (s2[++p])
		ret[i + p] = s2[p];
	return (ret);
}
