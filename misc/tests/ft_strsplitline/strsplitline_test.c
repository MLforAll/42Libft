/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplitline_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:52:51 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/12 22:13:09 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int		main(void)
{
	char	**ret;
	char	*s1;
	char	*s2;

	s1 = "Je fais un test\navec mon deuxieme split\n\nIl doit\n\n\nfctionner\n";
	s2 = "Un test\n\n\n\navec\n\n\nplein\nde\nblancs";

	ft_putendl_color("First test", REDCLR);
	ret = ft_strsplitline(s1);
	ft_tabprint(ret, "ret1");
	ft_tabfree(&ret);

	ft_putendl_color("Second test", REDCLR);
	ret = ft_strsplitline(s2);
	ft_tabprint(ret, "ret2");
	ft_tabfree(&ret);

	return (0);
}
