/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:52:02 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/21 18:04:34 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tstrcat(t_str *vstr, const char *add)
{
	size_t	addlen;
	size_t	goal;
	char	*newline;

	if (!add || (addlen = ft_strlen(add)) == 0)
		return (FALSE);
	if (addlen + vstr->bufflen > vstr->bufflen)
	{
		goal = vstr->bufflen + addlen;
		if (vstr->bufflen == 0)
			vstr->bufflen = VSTR_DEFAULT_BUFFLEN;
		while (vstr->bufflen < goal)
			vstr->bufflen *= 2;
		if (!(newline = ft_strnew(vstr->bufflen)))
			return (FALSE);
		ft_strcpy(newline, vstr->s);
		free(vstr->s);
		vstr->s = newline;
	}
	ft_strcat(vstr->s, add);
	return (TRUE);
}
