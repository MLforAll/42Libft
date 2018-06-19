/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_name_from_path_2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:30:23 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/19 06:32:06 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*get_name_from_path_2(const char *path)
{
	const char		*tmp;
	const char		*chr;
	size_t			len;
	size_t			len_to_slash;

	if ((tmp = get_name_from_path(path)) && *tmp)
		return ((tmp) ? ft_strdup(tmp) : NULL);
	if (!tmp)
		return (NULL);
	if ((len = ft_strlen(path)) == 0)
		return (NULL);
	tmp = path + len - 1;
	while (len--)
	{
		if (*tmp == '/' && tmp[1])
			break ;
		tmp--;
	}
	tmp++;
	if (!(chr = (const char*)ft_strchr(tmp, '/')))
		return ((tmp) ? ft_strdup(tmp) : NULL);
	len_to_slash = chr - tmp;
	return (ft_strsub(tmp, 0, len_to_slash));
}

