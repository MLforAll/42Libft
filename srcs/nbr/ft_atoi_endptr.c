/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_endptr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:05:31 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/13 18:05:42 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline int		ft_atoi_endptr(const char *beginptr, const char *endptr)
{
	ssize_t	sz;

	if (endptr)
	{
		if (beginptr > endptr)
			return (0);
		sz = endptr - beginptr;
	}
	else
		sz = -1;
	return (ft_atoi_length(beginptr, sz));
}
