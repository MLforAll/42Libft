/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:42:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/08 01:02:31 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STR_H
# define T_STR_H

# define MSTR_DEFAULT_BUFFLEN	10

/*
** Data Structure
*/

typedef struct	s_str
{
	char	*s;
	size_t	bufflen;
}				t_str;

/*
** t_str data type functions
*/

t_str	ft_tstrnew(void);
void	ft_tstrdel(t_str *mstr);
int		ft_tstrcat(t_str *mstr, char *add);
int		ft_tstrcpy(t_str *mstr, char *add);

#endif
