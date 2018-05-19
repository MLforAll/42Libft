/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ttabdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 02:12:14 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/19 02:19:59 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_ttabdel(t_tab *mtab)
{
	free(mtab->data);
	mtab->data = NULL;
	ft_bzero(mtab, sizeof(t_tab));
}
