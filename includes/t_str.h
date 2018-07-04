/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:42:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/04 02:52:10 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STR_H
# define T_STR_H

# include <string.h>

# define VSTR_DEFAULT_BUFFLEN	10

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

t_str			ft_tstrnew(void);
void			ft_tstrdel(t_str *vstr);
void			ft_tstrclr(t_str *vstr);
int				ft_tstrcat(t_str *vstr, const char *add);
int				ft_tstrncat(t_str *vstr, const char *add, ssize_t len);
int				ft_tstrcpy(t_str *vstr, const char *add);
int				ft_tstrncpy(t_str *vstr, const char *add, ssize_t len);

#endif
