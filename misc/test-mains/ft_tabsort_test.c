/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testreadstdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:07:18 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 13:28:24 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char	**splittedinput;

	if (ac < 3)
		return (ft_returnmsg("You need to specify a str and delimiter for strsplit!", 2, 1));
	splittedinput = ft_strsplit(av[1], av[2][0]);
	ft_tabsort(splittedinput);
	ft_puttab(splittedinput, "splittedinput");
	ft_tabfree(&splittedinput);
	return (0);
}
