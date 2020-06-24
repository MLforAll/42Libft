/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tcgetattr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:55:30 by kdumarai          #+#    #+#             */
/*   Updated: 2020/06/24 20:06:06 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifdef __APPLE__

#include <sys/ioctl.h>
#include "libc.h"

inline int	ft_tcgetattr(int fd, struct termios *t)
{
	return (ioctl(fd, TIOCGETA, t));
}

#else

#include "print.h"
#include <stdlib.h>

inline int	ft_tcgetattr(int fd, struct termios *t)
{
	(void)fd;
	(void)t;
	ft_putendl_fd("UNSUPPORTED", 2);
	abort();
}

#endif
