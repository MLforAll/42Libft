/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strsplit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 21:30:21 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/15 22:17:20 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*gen(int max)
{
	int		i;
	int		n;
	char	*dst;

	if (!(dst = ft_strnew(max)))
		return (NULL);
	for (i = 0; i < max; i++)
		dst[i] = arc4random_uniform(91) + 32;
	dst[max] = '\0';
	return (dst);
}

int		main(int ac, char **av)
{
	char	*str;
	char	c;
	char	**ret;

	if (ac >= 3)
	{
		str = av[1];
		c = av[2][0];
	}
	else
	{
		ft_putendl("Generating hardcore test...");
		str = gen(1024 * 1024 * 128);
		c = 32;
		ft_putchar('\n');
	}
	if (!(ret = ft_strsplit(str, c)))
		return (ft_returnmsg("ret is NULL! Mallocs prob have failed!", 2, 1));
	ft_puttab(ret, "ret");
	ft_tabfree(&ret);
	if (ac < 3)
		ft_strdel(&str);
	return (0);
}
