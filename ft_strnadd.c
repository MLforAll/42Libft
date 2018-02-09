/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnadd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:42:58 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/08 22:56:07 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_strnadd(char **str, char *add, size_t len)
{
	char	*tmp;

	tmp = *str;
	if (!*str = ft_strjoin(*str, add))
	{
		*str = tmp;
		return (FALSE);
	}
	free(tmp);
	return (TRUE);
}
