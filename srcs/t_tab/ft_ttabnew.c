/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ttabnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 01:53:40 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/03 00:42:23 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_tab	ft_ttabnew(size_t data_size)
{
	t_tab	ret;

	ft_bzero(&ret, sizeof(t_tab));
	if (!(ret.data = malloc(data_size * MTAB_DEFAULT_BUFFLEN)))
		return (ret);
	ret.data_size = data_size;
	ret.buff_size = MTAB_DEFAULT_BUFFLEN * data_size;
	return (ret);
}
