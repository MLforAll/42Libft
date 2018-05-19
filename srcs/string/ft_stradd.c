/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:42:58 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/19 19:36:25 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_stradd(char **str, char *add)
{
	char	*tmp;

	if (!str || !add)
		return (FALSE);
	if (!*str)
	{
		*str = ft_strdup(add);
		return (TRUE);
	}
	tmp = *str;
	if (!(*str = ft_strjoin(*str, add)))
	{
		*str = tmp;
		return (FALSE);
	}
	free(tmp);
	return (TRUE);
}
