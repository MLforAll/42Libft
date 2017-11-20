/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:25:44 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/20 14:27:49 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_readfd(int fd, size_t buff_size)
{
	char	*ret;
	char	*tmp;
	char	buff[buff_size + 1];
	int		rbytes;

	ret = ft_strnew(0);
	while ((rbytes = read(fd, buff, buff_size)) > 0)
	{
		buff[rbytes] = '\0';
		tmp = ret;
		ret = ft_strjoin(ret, buff);
		free(tmp);
	}
	return (ret);
}
