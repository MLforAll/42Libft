/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplitline.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:53:54 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/12 22:55:18 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_cnt(char const *s, char c)
{
	int		ret;
	int		i;

	ret = 0;
	i = -1;
	while (s[++i])
		ret += (s[i] == c);
	return (ret + 1);
}

char			**ft_strsplitline(char const *s)
{
	int		i;
	int		p;
	int		r;
	char	**ret;

	if (!s || !(ret = (char**)malloc(sizeof(char*) * (word_cnt(s, '\n') + 1))))
		return (NULL);
	i = 0;
	p = 0;
	r = -1;
	while (s[p])
	{
		p = i;
		while (s[p] && s[p] != '\n')
			p++;
		ret[++r] = ft_strsub(s, i, (size_t)(p - i));
		if (!s[i])
			break ;
		i = p + 1;
	}
	ret[++r] = NULL;
	return (ret);
}
