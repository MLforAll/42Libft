/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2020/01/13 17:57:54 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NBR_H
# define NBR_H

# include <string.h>

int		ft_atoi_length(const char *str, ssize_t sz);
int		ft_atoi_endptr(const char *beginptr, const char *endptr);

void	ft_nbrcpy(char *dst, long nb);
void	ft_nbrcat(char *dst, long nb);
size_t	ft_nbrlen_base(long long n, int base);
size_t	ft_nbrlen(long long n);
int		ft_secatoi(int *dest, const char *str);

t_uint8	ft_untob_unsigned(char *dst, \
							unsigned long long n, \
							t_uint8 base, \
							const char *cs);
t_uint8	ft_untob(char *dst, long long n, t_uint8 base, const char *cs);

char	*ft_itoa(int n);
char	*ft_lltoa(long long nl);

#endif
