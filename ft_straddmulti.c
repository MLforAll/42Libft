/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddmulti.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/08 22:42:20 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/08 22:55:12 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdarg.h>
#include "libft.h"

char	*ft_strmulti(char *fmt, ...)
{
	char	*ret;
	va_list	vlst;

	if (!(ret = ft_strnew(0)))
		return (NULL);
	va_start(vlst, fmt);
	while (*fmt)
	{
		if (*fmt != '%' || fmt[1] == '%')
			ft_strnadd(ret, fmt, 1);
		else
			ft_stradd(ret, va_arg(char*));
		fmt++;
	}
	va_end(vlst);
	return (ret);
}
