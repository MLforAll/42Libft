/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:37:30 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 19:32:46 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = (char*)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	while (i <= size)
		ret[i++] = '\0';
	return (ret);
}
