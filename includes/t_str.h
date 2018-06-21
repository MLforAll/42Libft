/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_str.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:42:41 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/21 18:05:55 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STR_H
# define T_STR_H

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

t_str	ft_tstrnew(void);
void	ft_tstrdel(t_str *vstr);
void	ft_tstrclr(t_str *vstr);
int		ft_tstrcat(t_str *vstr, const char *add);
int		ft_tstrcpy(t_str *vstr, const char *add);

#endif
