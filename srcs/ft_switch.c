/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 08:15:12 by kdumarai          #+#    #+#             */
/*   Updated: 2018/04/28 08:16:26 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_switch(void *dataref,
				void *tableref,
				size_t tablelen,
				int (*cmp)(void *, void *))
{
	void	*fdata;
	void	*addr;

	while (*(unsigned char**)(tableref + tablelen - sizeof(void*) * 2))
	{
		if (cmp(dataref, tableref))
		{
			fdata = *(unsigned char**)(tableref + tablelen - sizeof(void*));
			addr = tableref + tablelen - sizeof(void*) * 2;
			return (((int (*)(void *))*(unsigned char**)addr)(fdata));
		}
		tableref += tablelen;
	}
	return (FALSE);
}
