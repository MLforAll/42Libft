/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2018/07/27 00:00:11 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISC_H
# define MISC_H

# include <string.h>

char			*ft_readfd(int fd, size_t buff_size);
int				ft_returnmsg(char *msg, int fd, int retval);

int				ft_isatty(int fildes);

int				ft_switch(void *dataref,
						void *tableref,
						size_t tablelen,
						int (*cmp)(void *, void *));

int				ft_args_opts(char **av, int *idx, const char *charset,
							const char *overrides);

#endif
