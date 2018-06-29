/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_types.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:09:03 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/28 23:10:59 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPES_H
# define FT_TYPES_H

# include <stddef.h>

/*
** 8-bit ones
*/

typedef unsigned char	t_uint8;
typedef char			t_int8;

/*
** 32-bit ones
*/

typedef unsigned int	t_uint32;
typedef int				t_int32;

/*
** 64-bit ones
*/

typedef unsigned long	t_uint64;
typedef long			t_int64;

/*
** ptr
*/

typedef ptrdiff_t		t_uintptr;
typedef t_int64			t_intptr;

#endif
