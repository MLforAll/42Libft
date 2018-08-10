/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testreadstdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:07:18 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 12:43:38 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	char	*stdinput;
	char	splitdelim;
	char	**splittedinput;

	splitdelim = '\n';
	if (ac < 2)
		ft_putstr("You can specify a delimiter for ft_strsplit!\n\n");
	else
		splitdelim = av[1][0];
	stdinput = ft_readfd(0, 32);
	splittedinput = ft_strsplit(stdinput, splitdelim);
	ft_puttab(splittedinput, "splittedinput");
	ft_strdel(&stdinput);
	ft_tabfree(&splittedinput);
	return (0);
}
