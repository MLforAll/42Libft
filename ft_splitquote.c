/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitquote.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 02:37:36 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/18 04:42:46 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	is_c_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (TRUE);
		charset++;
	}
	return (FALSE);
}

static void	free_lst(void *data, size_t ds)
{
	(void)ds;
	free(data);
}

static void	add_elem(t_list **dest, char **last, unsigned int *idx)
{
	t_list			*new;

	if (!dest || !last || !idx)
		return ;
	if (*idx > 0)
	{
		if (!(new = ft_lstnew(NULL, 0)))
			return ;
		if ((new->content = ft_strsub(*last, 0, *idx)))
			new->content_size = ft_strlen(new->content) + 1;
		ft_lstpush(dest, new);
	}
	*last = (*last) + *idx + 1;
	*idx = 0;
}

t_list		*ft_splitquote(char *s, char *charset, char qc)
{
	t_list			*ret;
	char			*last;
	unsigned int	idx;
	int				split;

	ret = NULL;
	idx = 0;
	last = s;
	split = TRUE;
	while (last[idx])
	{
		if (last[idx] == qc && (idx == 0 || last[idx - 1] != '\\'))
			split = !split;
		if (!last[idx] || (is_c_charset(last[idx], charset) && split))
			add_elem(&ret, &last, &idx);
		else
			idx++;
	}
	if (!split)
	{
		ft_lstdel(&ret, &free_lst);
		return (NULL);
	}
	add_elem(&ret, &last, &idx);
	return (ret);
}
