/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 19:14:13 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	char	*str;

	str = NULL;
	if (ac < 2)
		return (1);
	str = ft_strnew(atoi(av[1]));
	if (str)
	{
		printf("SUCCESS\n");
		ft_strdel(&str);
	}
	return (0);
}
