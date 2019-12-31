/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structcopy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 22:59:05 by kelian            #+#    #+#             */
/*   Updated: 2019/12/31 03:00:12 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define	ISRC_MSK	0x0f
#define	IDST_MSK	0xf0
#define AFIL_C		0
#define AFIL_N		1
#define ISHIFT		4

static void				ft_structcopy_member(const char sf, const char df, \
											const void *sptr, void *dptr)
{
	t_uint64	val;

	val = 0;
	if (sf == 'c')
		val = *(const t_uint8 *)sptr;
	else if (sf == 'w')
		val = *(const t_uint16 *)sptr;
	else if (sf == 'd')
		val = *(const t_uint32 *)sptr;
	else if (sf == 'q')
		val = *(const t_uint64 *)sptr;
	if (df == 'c')
		*(t_uint8 *)dptr = (t_uint8)val;
	else if (df == 'w')
		*(t_uint16 *)dptr = (t_uint16)val;
	else if (df == 'd')
		*(t_uint32 *)dptr = (t_uint32)val;
	else if (df == 'q')
		*(t_uint64 *)dptr = val;
}

inline static t_uint8	ft_structcopy_msize(const char f)
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

static t_uint8			ft_structcopy_align(const char *fmt)
{
	t_uint8	ret;
	t_uint8	tmp;

	ret = 0;
	while (TRUE)
	{
		tmp = ft_structcopy_msize(*fmt);
		if (tmp > ret)
			ret = tmp;
		if (!(fmt = ft_strchr(fmt, ';')))
			break ;
		fmt++;
	}
	return (ret);
}

inline static void		ft_structcopy_ptr_adjust(t_uint8 align, \
												t_uint8 *afill, \
												const void **s, \
												void **d)
{
	t_uint8	saln;
	t_uint8	daln;
	t_uint8	safl;
	t_uint8	dafl;

	if ((safl = (afill[AFIL_N] & ISRC_MSK)) >= (saln = (align & ISRC_MSK)))
	{
		if (safl > saln)
			*s = (const void *)((t_uintptr)*s + saln - (afill[AFIL_C] & ISRC_MSK));
		afill[AFIL_N] = (afill[AFIL_N] & IDST_MSK);
	}
	if ((dafl = ((afill[AFIL_N] & IDST_MSK) >> ISHIFT)) >= (daln = ((align & IDST_MSK) >> ISHIFT)))
	{	
		if (dafl > daln)
			*d = (void *)((t_uintptr)*d + daln - ((afill[AFIL_C] & IDST_MSK) >> ISHIFT));
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
	align = ft_structcopy_align(sfmt) | (ft_structcopy_align(dfmt) << ISHIFT);
	afill[AFIL_C] = 0;
	while (TRUE)
	{
		sizes = ft_structcopy_msize(*sfmt) | (ft_structcopy_msize(*dfmt) << ISHIFT);
		afill[AFIL_N] = ((afill[AFIL_C] & ISRC_MSK) + (sizes & ISRC_MSK)) \
					| ((afill[AFIL_C] & IDST_MSK) + (sizes & IDST_MSK));
		ft_structcopy_ptr_adjust(align, afill, &src, &dst);
		ft_structcopy_member(*sfmt, *dfmt, src, dst);
		if (!(sfmt = ft_strchr(sfmt, ';')) || !(dfmt = ft_strchr(dfmt, ';')))
			break ;
		sfmt++;
		dfmt++;
		src = (const void *)((t_uintptr)src + (sizes & ISRC_MSK));
		dst = (void *)((t_uintptr)dst + ((sizes & IDST_MSK) >> ISHIFT));
		afill[AFIL_C] = afill[AFIL_N];
	}
	return (dptr);
}
