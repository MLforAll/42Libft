/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:42:58 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/21 22:52:52 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_stradd(char **str, char *add)
{
	char	*tmp;

	if (!str || !add)
		return (FALSE);
	tmp = *str;
	if (!(*str = ft_strjoin(*str, add)))
	{
		*str = tmp;
		return (FALSE);
	}
	free(tmp);
	return (TRUE);
}
