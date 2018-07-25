/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstr_cpycore.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 05:03:39 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/25 16:39:35 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tstr_cpycore.h"

inline int		ft_tstr_cpycore(t_str *vstr, size_t addlen)
{
	size_t	goal;
	char	*new_s;

	if (addlen == 0)
		return (FALSE);
	if ((goal = vstr->len + addlen) > vstr->bufflen)
	{
		if (vstr->bufflen == 0)
			vstr->bufflen = VSTR_DEFAULT_BUFFLEN;
		while (vstr->bufflen < goal)
			vstr->bufflen += VSTR_DEFAULT_BUFFLEN;
		if (!(new_s = ft_strnew(vstr->bufflen)))
			return (FALSE);
		(void)ft_strcpy(new_s, vstr->s);
		free(vstr->s);
		vstr->s = new_s;
	}
	return (TRUE);
}
