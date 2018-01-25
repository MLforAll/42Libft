/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 19:11:01 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/25 21:12:53 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	**ft_tabdup(const char **src)
{
	char	**ret;
	char	**bw;
	char	**bws;

	if (!(ret = (char**)malloc(sizeof(char*) * (ft_tablen(src) + 1))))
		return (NULL);
	bw = ret;
	bws = (char**)src;
	while (*bws)
	{
		if (!(*bw = ft_strdup(*bws)))
		{
			ft_tabfree(&ret);
			return (NULL);
		}
		bws++;
		bw++;
	}
	*bw = NULL;
	return (ret);
}
