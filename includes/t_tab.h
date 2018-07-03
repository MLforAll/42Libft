/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tab.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:42:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/03 00:39:02 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_TAB_H
# define T_TAB_H

# define MTAB_DEFAULT_BUFFLEN	10

/*
** Data Structure
*/

typedef struct	s_tab
{
	void	*data;
	size_t	data_size;
	size_t	count;
	size_t	oc_size;
	size_t	buff_size;
}				t_tab;

/*
** t_tab data type functions
*/

t_tab	ft_ttabnew(size_t data_size);
t_uint8	ft_ttabcat(t_tab *mtab, void *ntab, size_t nb);
void	ft_ttabdel(t_tab *mtab);

#endif
