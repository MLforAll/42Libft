/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrncpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:46:42 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/25 03:50:17 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tstr_cpycore.h"

int		ft_tstrncpy(t_str *vstr, const char *add, ssize_t len)
{
	if (!add
		|| !ft_tstr_cpycore(vstr, (len == -1) ? ft_strlen(add) : (size_t)len))
		return (FALSE);
	if (len == -1)
		(void)ft_strcpy(vstr->s, add);
	else
		(void)ft_strncpy(vstr->s, add, (size_t)len);
	vstr->len = ft_strlen(vstr->s);
	return (TRUE);
}
