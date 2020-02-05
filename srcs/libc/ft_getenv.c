/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 21:18:06 by kdumarai          #+#    #+#             */
/*   Updated: 2020/02/05 21:22:24 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_getenv(const char *name)
{
	extern char	**environ;
	char		**bw;
	char		*tmp;

	if (!environ)
		return (NULL);
	bw = environ;
	while (*bw)
	{
		if (ft_strstart(*bw, name) && (tmp = ft_strchr(*bw, '=')))
			return (tmp + 1);
		bw++;
	}
	return (NULL);
}
