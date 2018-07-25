/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ttabcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 01:59:20 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/25 16:41:32 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_uint8	ft_ttabcat(t_tab *mtab, void *ntab, size_t nb)
{
	void	*newdat;
	size_t	goal;
	size_t	new_size;
	size_t	size;

	goal = mtab->oc_size + nb * mtab->data_size;
	if (goal > mtab->buff_size)
	{
		if (mtab->buff_size == 0)
			mtab->buff_size = MTAB_DEFAULT_BUFFLEN;
		new_size = mtab->buff_size;
		while (new_size < goal)
			new_size += MTAB_DEFAULT_BUFFLEN;
		if (!(newdat = malloc(new_size)))
			return (FALSE);
		ft_memcpy(newdat, mtab->data, mtab->oc_size);
		free(mtab->data);
		mtab->data = newdat;
		mtab->buff_size = new_size;
	}
	size = nb * mtab->data_size;
	ft_memcpy((void*)((ptrdiff_t)mtab->data + mtab->oc_size), ntab, size);
	mtab->oc_size += size;
	mtab->count += nb;
	return (TRUE);
}
