/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:45:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/11 22:04:41 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstart(char *s, char *check)
{
	if (!s || !check)
		return (NULL);
	while (*check)
	{
		if (*(s++) != *(check++))
			return (NULL);
	}
	return (s);
}
