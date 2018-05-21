/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_name_from_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 20:30:23 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/21 20:35:51 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*get_name_from_path(const char *path)
{
	if (!path)
		return (NULL);
	if (ft_strcmp((char*)path, "/") == 0)
		return ((char*)path);
	return (get_last_component(path, '/'));
}
