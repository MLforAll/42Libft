/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpyf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/31 14:33:50 by kdumarai          #+#    #+#             */
/*   Updated: 2019/12/31 14:47:40 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpyf(void *dp, const char *df, const void *s, const char *sf)
{
	void	*dst;

	dst = dp;
	while (TRUE)
	{
		(void)ft_memintcpy(*sf, *df, s, dst);
		sf = ft_strchr(sf, ';');
		if (!sf || !(df = ft_strchr(df, ';')))
			break ;
	}
	return (dp);
}
