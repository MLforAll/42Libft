/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 17:13:09 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int ac, char **av)
{
	if (ac < 2)
		return (1);
	char strs[0xF00];
	char strm[0xF00];
	int i = -1;
	int p = -1;
	int size = atoi(av[1]);

	bzero(strs, size);
	ft_bzero(strm, size);
	while (++i < size)
		printf("Mine: %c\n", strm[i]);
	if (++p < size)
		printf("Orig: %c\n", strs[p]);
	return (0);
}
