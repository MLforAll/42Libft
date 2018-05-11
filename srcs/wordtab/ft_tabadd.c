/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 01:00:54 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/11 01:28:44 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tabadd(char ***wt, char **wt2)
{
	char	**tmp;

	if (!wt || !wt2)
		return (FALSE);
	if (!(tmp = ft_tabjoin(*wt, wt2)))
		return (FALSE);
	free(*wt);
	*wt = tmp;
	return (TRUE);
}
