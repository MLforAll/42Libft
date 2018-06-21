/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:43:45 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/21 18:05:34 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_str	ft_tstrnew(void)
{
	t_str	ret;

	ret.s = ft_strnew(VSTR_DEFAULT_BUFFLEN);
	ret.bufflen = VSTR_DEFAULT_BUFFLEN;
	return (ret);
}
