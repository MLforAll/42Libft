/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 13:17:14 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int ac, char **av)
{
	if (ac < 3)
		return (1);
	printf("Mine: %s\n", ft_strstr(av[1], av[2]));
	printf("Orig: %s\n", strstr(av[1], av[2]));
	return (0);
}
