/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 04:32:48 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/18 04:50:20 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_strrmc(char **s, char c)
{
	char			*new;
	char			*tmp;
	unsigned int	idx;

	if (!s || !*s || !(new = ft_strnew(ft_strlen(*s))))
		return ;
	idx = 0;
	tmp = *s;
	while (*tmp)
	{
		if (*tmp != c || (idx > 0 && *(tmp - 1) == '\\'))
			new[idx++] = *tmp;
		tmp++;
	}
	free(*s);
	*s = ft_strdup(new);
	free(new);
}
