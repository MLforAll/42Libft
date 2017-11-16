/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testreadfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 13:49:07 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 12:44:25 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

int		main(int ac, char **av)
{
	char	*filecont;
	int		fd;

	if (ac < 2)
		return (ft_returnmsg("usage: testread /path/to/file", 2, 1));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (ft_returnmsg("testread: Couldn't open the file!", 2, 1));
	filecont = ft_readfd(fd, 32);
	ft_putstr(filecont);
	free(filecont);
	if (close(fd) == -1)
		return (ft_returnmsg("testread: Couldn't close the file!", 2, 1));
	return (0);
}
