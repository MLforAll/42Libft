/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendlmax.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:36:45 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 20:51:42 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

inline size_t	ft_putendlmax(const char *s, size_t len)
{
	return (ft_putendlmax_fd(s, len, STDOUT_FILENO));
}

inline size_t	ft_putendlendptr(const char *s, const char *endptr)
{
	return (ft_putendlendptr_fd(s, endptr, STDOUT_FILENO));
}
