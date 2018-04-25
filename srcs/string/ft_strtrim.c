/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:04:20 by kdumarai          #+#    #+#             */
/*   Updated: 2017/12/08 16:48:08 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				is_whitechar(char c)
{
	return ((c == ' ' || c == '\t' || c == '\n'));
}

static unsigned int		first_last_index(int first, const char *str)
{
	unsigned int	i;

	i = (first) ? 0 : ft_strlen((char*)str);
	i -= (!first && i > 0);
	while (is_whitechar(str[i]) && (i > 0 || first))
		i += (first) ? 1 : -1;
	return (i);
}

char					*ft_strtrim(char const *s)
{
	char			*ret;
	unsigned int	findex;
	unsigned int	lindex;

	if (!s)
		return (NULL);
	findex = first_last_index(1, s);
	lindex = first_last_index(0, s);
	if (lindex == 0)
		return (ft_strnew(0));
	if (!(ret = ft_strsub(s, findex, (size_t)(lindex - findex + 1))))
		return (NULL);
	return (ret);
}
