/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 23:09:03 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/10 19:07:03 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INT_H
# define FT_INT_H

# include <stddef.h>

/*
** 8-bit ones
*/

typedef unsigned char		t_uint8;
typedef char				t_int8;

/*
** 16-bit ones
*/

typedef unsigned short		t_uint16;
typedef short				t_int16;

/*
** 32-bit ones
*/

typedef unsigned int		t_uint32;
typedef int					t_int32;

/*
** 64-bit ones
*/

typedef unsigned long long	t_uint64;
typedef long long			t_int64;

/*
** ptr
*/

typedef t_uint64			t_uintptr;
typedef ptrdiff_t			t_intptr;

/*
** characters
*/

typedef int					t_wchar;

#endif
