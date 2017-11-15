/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:23:31 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 15:07:03 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*bc;

	i = -1;
	bc = (unsigned char*)b;
	while ((size_t)++i < len)
		bc[i] = (unsigned char)c;
	b = bc;
	return (b);
}
