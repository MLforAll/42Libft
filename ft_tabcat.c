/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 21:51:11 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/17 19:41:59 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_tabcat(const char **tab1, const char **tab2)
{
	size_t	len1;
	size_t	len2;
	char	**ret;
	char	**brw;

	if (!tab1 || !tab2)
		return (NULL);
	len1 = ft_tablen(tab1);
	len2 = ft_tablen(tab2);
	if (!(brw = (char**)malloc(sizeof(char*) * (len1 + len2 + 1))))
		return (NULL);
	ret = brw;
	while (*tab1)
		*(brw++) = ft_strdup(*(tab1++));
	while (*tab2)
		*(brw++) = ft_strdup(*(tab2++));
	*brw = NULL;
	return (ret);
}
