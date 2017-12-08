/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:32:16 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 13:29:29 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(int ac, char **av)
{
	char	*toconv;

#ifdef __NOARGS__
	(void)ac;
	(void)av;
	toconv = "\t\v\f\r\n \f-06050";
#else
	if (ac < 2)
		return (1);
	toconv = av[1];
#endif
	printf("Mine: %i\n", ft_atoi(toconv));
	printf("Orig: %i\n", atoi(toconv));
	return (0);
}
