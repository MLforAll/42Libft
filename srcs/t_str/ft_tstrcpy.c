/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:46:42 by kdumarai          #+#    #+#             */
/*   Updated: 2018/06/14 09:29:44 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tstrcpy(t_str *mstr, const char *add)
{
	size_t	addlen;

	if (!add || (addlen = ft_strlen(add)) == 0)
		return (FALSE);
	if (addlen > mstr->bufflen)
	{
		if (mstr->bufflen == 0)
			mstr->bufflen = MSTR_DEFAULT_BUFFLEN;
		while (mstr->bufflen < addlen)
			mstr->bufflen *= 2;
		free(mstr->s);
		if (!(mstr->s = ft_strnew(mstr->bufflen)))
			return (FALSE);
	}
	ft_strcpy(mstr->s, add);
	return (TRUE);
}
