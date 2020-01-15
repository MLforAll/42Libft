/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memfmtsz.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 21:10:41 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 21:27:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Note: Yep, if forest is kinda ugly, but it works fast and fits in 25 lines
*/

size_t	ft_memfmtsz(const char *fmt)
{
	size_t			ret;
	int				n;

	ret = 0;
	while (TRUE)
	{
		if ((n = ft_atoi(fmt)))
			ret += n;
		else if (*fmt == 'c')
			ret += sizeof(t_uint8);
		else if (*fmt == 'w')
			ret += sizeof(t_uint16);
		else if (*fmt == 'd')
			ret += sizeof(t_uint32);
		else if (*fmt == 'q')
			ret += sizeof(t_uint64);
		if (!(fmt = ft_strchr(fmt, ';')))
			break ;
	}
	return (ret);
}
