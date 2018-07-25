/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 23:47:51 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/25 04:09:41 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew_replace(const char *s, const char *find, const char *repl)
{
	t_str	vs;
	size_t	find_len;

	if (!ft_tstrnew(&vs))
		return (NULL);
	find_len = ft_strlen(find);
	while (*s)
	{
		if (ft_strstart(s, find))
		{
			if (!ft_tstrcat(&vs, repl))
			{
				ft_tstrdel(&vs);
				return (NULL);
			}
			s += find_len;
			continue ;
		}
		if (!ft_tstrncat(&vs, s++, 1))
		{
			ft_tstrdel(&vs);
			return (NULL);
		}
	}
	return (vs.s);
}
