/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 08:15:12 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/14 03:13:05 by kdumarai         ###   ########.fr       */
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

	while (*(void**)((uintptr_t)tableref + tablelen - sizeof(void*) * 2))
	{
		if (cmp(dataref, tableref))
		{
			dt = *(void**)((uintptr_t)tableref + tablelen - sizeof(void*));
			adr = *(void**)((uintptr_t)tableref + tablelen - sizeof(void*) * 2);
			return (((int (*)(void *))adr)(dt));
		}
		tableref = (void*)((uintptr_t)tableref + tablelen);
	}
	return (FALSE);
}
