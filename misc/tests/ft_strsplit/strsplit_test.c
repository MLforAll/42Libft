/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/10 20:05:34 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	char	**ret;
	int		i;

	i = -1;
	if (ac < 3)
		return (1);
	ret = ft_strsplit(av[1], av[2][0]);
	while (ret[++i])
		printf("ret[%i] = %s\n", i, ret[i]);
	while (*ret)
	{
		free(*ret);
		*ret = NULL;
		ret++;
	}
	ret = NULL;
	return (0);
}
