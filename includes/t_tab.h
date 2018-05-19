/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_tab.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:42:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/19 02:20:27 by kdumarai         ###   ########.fr       */
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
	size_t	oc_size;
	size_t	bufflen;
}				t_tab;

/*
** t_tab data type functions
*/

t_tab	ft_ttabnew(size_t data_size);
void	ft_ttabcat(t_tab *mtab, void *ntab, size_t size);
void	ft_ttabdel(t_tab *mtab);

#endif
