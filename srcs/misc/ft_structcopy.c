/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structcopy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 22:59:05 by kelian            #+#    #+#             */
/*   Updated: 2019/12/31 14:44:14 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define ISRC_MSK	0x0f
#define IDST_MSK	0xf0
#define AFIL_C		0
#define AFIL_N		1
#define ISHIFT		4

inline static t_uint8	ft_scpy_msize(const char f)
{
	if (f == 'c')
		return (1);
	if (f == 'w')
		return (2);
	if (f == 'd')
		return (4);
	if (f == 'q')
		return (8);
	return (0);
}

static t_uint8			ft_scpy_align(const char *fmt)
{
	t_uint8	ret;
	t_uint8	tmp;

	ret = 0;
	while (TRUE)
	{
		tmp = ft_scpy_msize(*fmt);
		if (tmp > ret)
			ret = tmp;
		if (!(fmt = ft_strchr(fmt, ';')))
			break ;
		fmt++;
	}
	return (ret);
}

inline static void		ft_scpy_ptr_adjust(t_uint8 align, \
											t_uint8 *afill, \
											const void **s, \
											void **d)
{
	t_uint8	saln;
	t_uint8	daln;
	t_uint8	safl;
	t_uint8	dafl;

	safl = (afill[AFIL_N] & ISRC_MSK);
	saln = (align & ISRC_MSK);
	if (safl >= saln)
	{
		if (safl > saln)
			*s = (const void *)((t_uintptr)*s + saln \
				- (afill[AFIL_C] & ISRC_MSK));
		afill[AFIL_N] = (afill[AFIL_N] & IDST_MSK);
	}
	dafl = ((afill[AFIL_N] & IDST_MSK) >> ISHIFT);
	(daln = ((align & IDST_MSK) >> ISHIFT));
	if (dafl >= daln)
	{
		if (dafl > daln)
			*d = (void *)((t_uintptr)*d + daln \
				- ((afill[AFIL_C] & IDST_MSK) >> ISHIFT));
		afill[AFIL_N] = (afill[AFIL_N] & ISRC_MSK);
	}
}

void					*ft_structcopy(const void *src, const char *sfmt, \
										void *dptr, const char *dfmt)
{
	void		*dst;
	t_uint8		align;
	t_uint8		afill[2];
	t_uint8		sizes;

	dst = dptr;
	align = ft_scpy_align(sfmt) | (ft_scpy_align(dfmt) << ISHIFT);
	afill[AFIL_C] = 0;
	while (TRUE)
	{
		sizes = ft_scpy_msize(*sfmt) | (ft_scpy_msize(*dfmt) << ISHIFT);
		afill[AFIL_N] = ((afill[AFIL_C] & ISRC_MSK) + (sizes & ISRC_MSK)) \
					| ((afill[AFIL_C] & IDST_MSK) + (sizes & IDST_MSK));
		ft_scpy_ptr_adjust(align, afill, &src, &dst);
		(void)ft_memintcpy(*sfmt, *dfmt, src, dst);
		sfmt = ft_strchr(sfmt, ';');
		if (!sfmt || !(dfmt = ft_strchr(dfmt, ';')))
			break ;
		sfmt++;
		dfmt++;
		src = (const void *)((t_uintptr)src + (sizes & ISRC_MSK));
		dst = (void *)((t_uintptr)dst + ((sizes & IDST_MSK) >> ISHIFT));
		afill[AFIL_C] = afill[AFIL_N];
	}
	return (dptr);
}
