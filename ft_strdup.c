/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:24:21 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/08 17:58:02 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	int		cnt;

	cnt = -1;
	ret = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) + 1));
	if (!ret)
		return (NULL);
	while (s1[++cnt])
		ret[cnt] = s1[cnt];
	ret[cnt] = '\0';
	return (ret);
}
