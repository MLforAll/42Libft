/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tstrcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/08 00:52:02 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/08 01:03:43 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_tstrcat(t_str *mstr, char *add)
{
	size_t	addlen;
	size_t	goal;
	char	*newline;

	if (!add || (addlen = ft_strlen(add)) == 0)
		return (FALSE);
	if (addlen + mstr->bufflen > mstr->bufflen)
	{
		goal = mstr->bufflen + addlen;
		if (mstr->bufflen == 0)
			mstr->bufflen = MSTR_DEFAULT_BUFFLEN;
		while (mstr->bufflen < goal)
			mstr->bufflen *= 2;
		if (!(newline = ft_strnew(mstr->bufflen)))
			return (FALSE);
		ft_strcpy(newline, mstr->s);
		free(mstr->s);
		mstr->s = newline;
	}
	ft_strcat(mstr->s, add);
	return (TRUE);
}
