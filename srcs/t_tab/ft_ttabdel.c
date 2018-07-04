/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ttabdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 02:12:14 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/04 02:48:50 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_ttabdel(t_tab *mtab, void (*delf)(void *, size_t))
{
	unsigned long	idx;

	if (!delf)
		free(mtab->data);
	else
	{
		idx = mtab->count;;
		while (idx--)
			delf((void*)((ptrdiff_t)mtab->data + idx * mtab->data_size),
				mtab->data_size);
	}
	ft_bzero(mtab, sizeof(t_tab));
}
