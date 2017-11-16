/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/16 18:18:15 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(int ac, char **av)
{
	/*char	destm[20] = "01234567890123456789";
	char	desto[20] = "01234567890123456789";*/
	char	destm[20] = "some text";
	char	desto[20] = "some text";

	if (ac < 3)
		return (1);
#ifdef __MY__
	printf("Mine: %lu\n", ft_strlcat(destm, av[1], atoi(av[2])));
	printf("\tdest = %s\n", destm);
#else
	(void)destm;
#endif
	printf("Orig: %lu\n", strlcat(desto, av[1], atoi(av[2])));
	printf("\tdest = %s\n", desto);
	return (0);
}
