/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:58:28 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/21 18:03:16 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tstrdel(t_str *vstr)
{
	if (!vstr)
		return ;
	ft_strdel(&vstr->s);
	vstr->bufflen = 0;
}
