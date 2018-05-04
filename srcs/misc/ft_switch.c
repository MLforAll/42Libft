/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 08:15:12 by kdumarai          #+#    #+#             */
/*   Updated: 2018/04/29 18:54:25 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_switch(void *dataref,
				void *tableref,
				size_t tablelen,
				int (*cmp)(void *, void *))
{
	void			*dt;
	unsigned char	*addr;

	while (*(unsigned char**)(tableref + tablelen - sizeof(void*) * 2))
	{
		if (cmp(dataref, tableref))
		{
			dt = (void*)*(unsigned char**)(tableref + tablelen - sizeof(void*));
			addr = *(unsigned char**)(tableref + tablelen - sizeof(void*) * 2);
			return (((int (*)(void *))addr)(dt));
		}
		tableref += tablelen;
	}
	return (FALSE);
}
