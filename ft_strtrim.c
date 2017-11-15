/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:04:20 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/15 13:06:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_whitechar(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n'));
}

static size_t	first_last_index(int first, const char *str)
{
	int		i;

	i = (first) ? 0 : ft_strlen((char*)str) - 1;
	while (is_whitechar(str[i]) && i >= 0)
		i += (first) ? 1 : -1;
	return (i);
}

char			*ft_strtrim(char const *s)
{
	char	*ret;
	size_t	findex;
	size_t	lindex;

	if (!s)
		return (NULL);
	findex = first_last_index(1, s);
	lindex = first_last_index(0, s);
	if (findex == ft_strlen(s))
		return (ft_strnew(0));
	ret = ft_strsub(s, (unsigned int)findex, (lindex - findex + 1));
	if (!ret)
		return (NULL);
	return (ret);
}
