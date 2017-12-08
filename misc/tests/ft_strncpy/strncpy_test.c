/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 18:54:26 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int ac, char **av)
{
	if (ac < 3)
		return (1);
	char	buffm[20];
	char	buffs[20];
	ft_strncpy(buffm, av[1], atoi(av[2]));
	strncpy(buffs, av[1], atoi(av[2]));

	printf("Mine: %s\n", buffm);
	printf("Orig: %s\n", buffs);
	if (!strcmp(buffm, buffs))
		printf("SUCCESS!\n");
	else
	{
		printf("FAILURE!\n");
		if (!buffm[atoi(av[2])])
			printf("DST IS TERMINATED\n");
	}
	return (0);
}
