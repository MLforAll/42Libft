/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:53:54 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/03 05:25:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned long	word_cnt(char const *s, char c)
{
	unsigned long	ret;
	unsigned long	i;

	ret = 0;
	i = 0;
	while (s[i])
		ret += (s[i++] == c);
	return (ret + 1);
}

static void				*freeretnull(char ***tab)
{
	ft_tabfree(tab);
	return (NULL);
}

char					**ft_strsplitline(char const *s)
{
	unsigned int	i;
	unsigned int	p;
	unsigned long	r;
	char			**ret;

	if (!s || !(ret = (char**)malloc(sizeof(char*) * (word_cnt(s, '\n') + 1))))
		return (NULL);
	i = 0;
	p = 0;
	r = 0;
	while (s[p])
	{
		p = i;
		while (s[p] && s[p] != '\n')
			p++;
		ret[r++] = ft_strsub(s, i, (size_t)(p - i));
		if (!ret)
			return (freeretnull(&ret));
		if (!s[i])
			break ;
		i = p + 1;
	}
	ret[r++] = NULL;
	return (ret);
}
