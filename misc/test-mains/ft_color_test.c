/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testclr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:19:35 by kdumarai          #+#    #+#             */
/*   Updated: 2017/11/13 12:40:34 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	ft_putendl("This is a msg");
	ft_putendl_color("Now in red", REDCLR);
	ft_putendl_color("Now in blue", BLUECLR);
	ft_putendl_color("Now in green", GREENCLR);
	ft_putstr_color("What about ", BLUECLR);
	ft_putendl_color("a mixed color message?", GREENCLR);
	ft_putstr(DEFAULTCLR);
	ft_putendl("And back to normal");
	return (0);
}
