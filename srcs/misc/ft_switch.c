/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 08:15:12 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/04 02:54:11 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_switch(void *dataref,
				void *tableref,
				size_t tablelen,
				int (*cmp)(void *, void *))
{
	void	*dt;
	void	*adr;

	while (*(void**)((ptrdiff_t)tableref + tablelen - sizeof(void*) * 2))
	{
		if (cmp(dataref, tableref))
		{
			dt = *(void**)((ptrdiff_t)tableref + tablelen - sizeof(void*));
			adr = *(void**)((ptrdiff_t)tableref + tablelen - sizeof(void*) * 2);
			return (((int (*)(void *))adr)(dt));
		}
		tableref = (void*)((ptrdiff_t)tableref + tablelen);
	}
	return (FALSE);
}
