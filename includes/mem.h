/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/10 18:57:09 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include <string.h>

void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

void 	*ft_memrev(void *p, size_t sz);

/*
** See "misc.h" for format
*/

void	*ft_memintcpy(const char sf, const char df, const void *s, void *d);
void	*ft_memcpyf(void *dp, const char *df, const void *s, const char *sf);
void	ft_memswap(void *s, const char *fmt);

#endif
