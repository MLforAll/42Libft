/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 18:56:11 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/10 18:57:15 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memrev(void *p, size_t sz)
{
	size_t			idx;
	unsigned char	byte;
	unsigned char	*pc;

	if (!p || sz == 0)
		return (p);
	sz--;
	idx = 0;
	pc = (unsigned char *)p;
	while (idx < sz - idx)
	{
		byte = pc[idx];
		pc[idx] = pc[sz - idx];
		pc[sz - idx] = byte;
		idx++;
	}
	return (p);
}
