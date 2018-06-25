/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendlmax_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 22:04:42 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/25 22:06:05 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendlmax_fd(const char *s, size_t len, int fd)
{
	ft_putstrmax_fd(s, len, fd);
	write(fd, "\n", 1);
}
