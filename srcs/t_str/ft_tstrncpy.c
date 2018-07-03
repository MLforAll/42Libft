/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:46:42 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/03 05:17:51 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tstrncpy(t_str *vstr, const char *add, ssize_t len)
{
	size_t	addlen;
	size_t	goal;
	char	*new_s;

	if (!add || (addlen = ft_strlen(add)) == 0)
		return (FALSE);
	if ((goal = ft_strlen(vstr->s) + addlen) > vstr->bufflen)
	{
		if (vstr->bufflen == 0)
			vstr->bufflen = VSTR_DEFAULT_BUFFLEN;
		while (vstr->bufflen < goal)
			vstr->bufflen *= 2;
		if (!(new_s = ft_strnew(vstr->bufflen)))
			return (FALSE);
		(void)ft_strcpy(new_s, vstr->s);
		free(vstr->s);
		vstr->s = new_s;
	}
	if (len == -1)
		(void)ft_strcpy(vstr->s, add);
	else
		(void)ft_strncpy(vstr->s, add, (size_t)len);
	return (TRUE);
}
