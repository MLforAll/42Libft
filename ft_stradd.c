/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stradd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 20:42:58 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/27 20:46:26 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_stradd(char **str, char *add)
{
	char	*tmp;

	tmp = *str;
	*str = ft_strjoin(*str, add);
	free(tmp);
}
