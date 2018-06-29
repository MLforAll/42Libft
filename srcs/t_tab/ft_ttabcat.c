/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ttabcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 01:59:20 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/28 23:06:03 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_ttabcat(t_tab *mtab, void *ntab, size_t size)
{
	void	*newdat;

	if (mtab->oc_size + size > mtab->bufflen)
	{
		if (!(newdat = malloc(mtab->bufflen *= 2)))
			return ;
		ft_memcpy(newdat, mtab->data, mtab->oc_size);
		free(mtab->data);
		mtab->data = newdat;
	}
	ft_memcpy((void*)((ptrdiff_t)mtab->data + mtab->oc_size), ntab, size);
	mtab->oc_size += size;
}
