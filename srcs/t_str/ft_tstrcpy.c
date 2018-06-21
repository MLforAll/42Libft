/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:46:42 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/21 18:04:42 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tstrcpy(t_str *vstr, const char *add)
{
	size_t	addlen;

	if (!add || (addlen = ft_strlen(add)) == 0)
		return (FALSE);
	if (addlen > vstr->bufflen)
	{
		if (vstr->bufflen == 0)
			vstr->bufflen = VSTR_DEFAULT_BUFFLEN;
		while (vstr->bufflen < addlen)
			vstr->bufflen *= 2;
		free(vstr->s);
		if (!(vstr->s = ft_strnew(vstr->bufflen)))
			return (FALSE);
	}
	ft_strcpy(vstr->s, add);
	return (TRUE);
}
