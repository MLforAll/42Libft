/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:25:44 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/27 18:26:27 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_readfd(int fd, size_t buff_size)
{
	char	*ret;
	char	sbuff[513];
	char	*dbuff;
	char	*bptr;
	int		rbytes;

	if (!(ret = ft_strnew(0))
		|| (buff_size > 512 && !(dbuff = ft_strnew(buff_size))))
		return (NULL);
	bptr = (dbuff) ? dbuff : sbuff;
	while ((rbytes = read(fd, bptr, buff_size)) > 0)
	{
		buff[rbytes] = '\0';
		ft_stradd(&ret, bptr);
	}
	ft_strdel(&dbuff);
	return (ret);
}
