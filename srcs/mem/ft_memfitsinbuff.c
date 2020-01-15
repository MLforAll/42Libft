/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfitsinbuff.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 22:08:14 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 22:11:57 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline t_uint8	ft_memfitsinbuff(const void *stptr, \
								const void *b, \
								size_t sz, \
								const void *endptr)
{
	if ((stptr && b < stptr) || (const void *)((t_uintptr)b + sz) > endptr)
		return (NO);
	return (YES);
}
