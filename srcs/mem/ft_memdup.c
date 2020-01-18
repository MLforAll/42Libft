/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 00:39:26 by kelian            #+#    #+#             */
/*   Updated: 2020/01/18 00:42:21 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

inline void	*ft_memdup(void *src, size_t sz)
{
	void	*ret;

	if (!(ret = malloc(sz)))
		return (NULL);
	return (ft_memcpy(ret, src, sz));
}
