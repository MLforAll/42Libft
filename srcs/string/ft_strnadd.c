/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:42:58 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/29 00:27:04 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strnadd(char **str, char *add, size_t len)
{
	char	*tmp;

	if (!str || !add)
		return (FALSE);
	tmp = *str;
	if (!(*str = ft_strnjoin(*str, add, len)))
	{
		*str = tmp;
		return (FALSE);
	}
	free(tmp);
	return (TRUE);
}
