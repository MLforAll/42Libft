/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrmax_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:36:45 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/25 22:08:24 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstrmax_fd(const char *s, size_t len, int fd)
{
	size_t	lentp;

	lentp = ft_strlen(s);
	if (len < lentp)
		lentp = len;
	write(fd, s, lentp);
}
