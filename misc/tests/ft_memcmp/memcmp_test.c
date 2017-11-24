/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/09 17:19:18 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main(void)
{
	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12";
	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 4;
	int sr = memcmp(s1, s2, size);
	int mr = ft_memcmp(s1, s2, size);
	printf("system: %i\nyours: %i\n", sr, mr);
	if (sr == mr)
		printf("SUCCESS!\n");
	else
		printf("FAIL!\n");
	return (0);
}
