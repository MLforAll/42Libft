/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:29:18 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 12:19:33 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab, char *tabname)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (tabname)
		{
			ft_putstr(tabname);
			ft_putstr("[");
			ft_putnbr(i);
			ft_putstr("]: ");
		}
		ft_putendl(tab[i]);
		i++;
	}
}
