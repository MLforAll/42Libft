/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putubt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 16:28:21 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/05 16:32:54 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putubt(t_btree *bt, void (*ft_putelem)(void*, size_t))
{
	if (!bt)
		return ;
	ft_putelem(bt->data, bt->data_size);
	if (bt->left)
	{
		ft_putendl("turn left");
		ft_putubt(bt->left, ft_putelem);
		ft_putendl("back up");
	}
	if (bt->right)
	{
		ft_putendl("turn right");
		ft_putubt(bt->right, ft_putelem);
		ft_putendl("back up");
	}
}
