/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testreadstdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:07:18 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 15:44:52 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	**splittedinput;

	if (ac < 3)
		return (ft_returnmsg("You need to specify a str and delimiter for strsplit!", 2, 1));
	splittedinput = ft_strsplit(av[1], av[2][0]);
	printf("len = %li\n", ft_tablen((const char **)splittedinput));
	ft_tabfree(&splittedinput);
	return (0);
}
