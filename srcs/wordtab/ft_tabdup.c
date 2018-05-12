/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:11:01 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/12 01:53:48 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabdup(char **src)
{
	char	**ret;
	char	**bw;

	if (!(ret = (char**)malloc(sizeof(char*) * (ft_tablen(src) + 1))))
		return (NULL);
	bw = ret;
	while (*src)
	{
		if (!(*bw = ft_strdup(*src)))
		{
			ft_tabfree(&ret);
			return (NULL);
		}
		src++;
		bw++;
	}
	*bw = NULL;
	return (ret);
}
