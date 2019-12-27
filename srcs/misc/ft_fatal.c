/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fatal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelian <kelian@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 04:56:02 by kelian            #+#    #+#             */
/*   Updated: 2019/12/27 04:59:48 by kelian           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

void	ft_fatal(const char *msg, int exval)
{
	if (msg)
		ft_putstr_fd(msg, STDERR_FILENO);
	exit((exval < 0) ? 1 : exval);
}
