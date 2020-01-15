/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendlmax_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 22:04:42 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 20:50:39 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

size_t			ft_putendlmax_fd(const char *s, size_t max, int fd)
{
	size_t	ret;

	ret = ft_putstrmax_fd(s, max, fd);
	if (write(fd, "\n", 1) > 0)
		ret++;
	return (ret);
}

inline size_t	ft_putendlendptr_fd(const char *s, const char *endptr, int fd)
{
	if (s > endptr)
		return (0);
	return (ft_putendlmax_fd(s, endptr - s, fd));
}
