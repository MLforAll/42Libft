/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2019/12/28 19:23:21 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISC_H
# define MISC_H

# include <string.h>

char			*ft_readfd(int fd, size_t buff_size);
int				ft_returnmsg(char *msg, int fd, int retval);

int				ft_isatty(int fildes);

int				ft_switch(const void *dataref,
						const void *tableref,
						size_t tablelen,
						int (*cmp)(const void *, const void *));

int				ft_args_opts(const char **av, int *idx, const char *charset,
							const char *overrides);

#endif
