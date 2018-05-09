/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:43:45 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/08 01:01:21 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_str	ft_tstrnew(void)
{
	t_str	ret;

	ret.s = ft_strnew(MSTR_DEFAULT_BUFFLEN);
	ret.bufflen = MSTR_DEFAULT_BUFFLEN;
	return (ret);
}
