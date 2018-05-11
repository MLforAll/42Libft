/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/11 19:27:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

typedef struct	s_btree
{
	void			*data;
	size_t			data_size;
	struct s_btree	*left;
	struct s_btree	*right;
}				t_btree;

t_btree	*ft_btnew(void *data, size_t data_size);
void	ft_btattach(t_btree *node, t_btree *left, t_btree *right);
void	ft_btdel(t_btree **node, void (*del)(void*, size_t));
void	ft_btdelone(t_btree **node, void (*del)(void*, size_t));

#endif
