/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 19:34:00 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/26 19:36:59 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	char	*str;

	if (ac < 4)
		return (1);
	setbuf(stdout, NULL);
	if (!(str = ft_strnew_replace(av[1], av[2], av[3])))
	{
		puts("malloc() error");
		return (1);
	}
	printf("Original: %s\n", av[1]);
	printf("New     : %s\n", str);
	free(str);
	return (0);
}
