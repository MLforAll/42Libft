/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstr_cpycore.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 05:03:39 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/13 05:18:56 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_tstr_cpycore.h"

inline int		ft_tstr_cpycore(t_str *vstr, const char *add)
{
	size_t	addlen;
	size_t	goal;
	char	*new_s;

	if ((addlen = ft_strlen(add)) == 0)
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
	return (TRUE);
}
