/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrmax_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:36:45 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 20:49:36 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t			ft_putstrmax_fd(const char *s, size_t max, int fd)
{
	size_t	len;

	len = 0;
	while (s[len] && len < max)
		len++;
	if (write(fd, s, len) > 0)
		return (len);
	return (0);
}

inline size_t	ft_putstrendptr_fd(const char *s, const char *endptr, int fd)
{
	if (s > endptr)
		return (0);
	return (ft_putstrmax_fd(s, endptr - s, fd));
}
