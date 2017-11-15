/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:53:54 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/15 13:12:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_cnt(char const *s, char c)
{
	int		ret;
	int		notc;
	int		i;

	ret = 0;
	i = 0;
	notc = 0;
	while (s[++i])
	{
		ret += (s[i - 1] == c && s[i] != c && i > 1);
		notc += (s[i] != c);
	}
	if (!ret && !notc)
		return (0);
	return (ret + 1);
}

static void		*freeretnull(char ***tab)
{
	ft_tabfree(tab);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		p;
	int		r;
	char	**ret;

	if (!s || !(ret = (char**)malloc(sizeof(char*) * (word_cnt(s, c) + 1))))
		return (NULL);
	i = -1;
	p = 0;
	r = -1;
	while (s[++i] && s[p])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		p = i + 1;
		while (s[p] && s[p] != c)
			p++;
		if (!(ret[++r] = ft_strsub(s, i, (size_t)(p - i))))
			return (freeretnull(&ret));
		i = p;
	}
	ret[++r] = NULL;
	return (ret);
}
