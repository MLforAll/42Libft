/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:36:45 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/15 20:53:25 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

inline size_t	ft_putstrmax(const char *s, size_t len)
{
	return (ft_putstrmax_fd(s, len, STDOUT_FILENO));
}

inline size_t	ft_putstrendptr(const char *s, const char *endptr)
{
	return (ft_putstrendptr_fd(s, endptr, STDOUT_FILENO));
}
