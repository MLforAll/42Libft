/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 16:37:48 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/25 16:44:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_putnchar_fd(char c, size_t n, int fd)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char) * (n + 1))))
	{
		while (n--)
			ft_putchar_fd(c, fd);
		return ;
	}
	ft_memset(str, c, n);
	str[n] = '\0';
	ft_putstr_fd(str, fd);
}
