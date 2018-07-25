/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrncat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:52:02 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/25 03:53:07 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tstr_cpycore.h"

int		ft_tstrncat(t_str *vstr, const char *add, ssize_t len)
{
	size_t	addlen;

	if (!add)
		return (FALSE);
	addlen = (len == -1) ? ft_strlen(add) : (size_t)len;
	if (addlen == 0 || !ft_tstr_cpycore(vstr, addlen))
		return (FALSE);
	if (len == -1)
		(void)ft_strcpy(vstr->s + vstr->len, add);
	else
		(void)ft_strncpy(vstr->s + vstr->len, add, (size_t)len);
	vstr->len += addlen;
	return (TRUE);
}
