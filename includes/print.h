/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/04 22:47:30 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);

void			ft_putstr_color(char const *s, char const *ec);
void			ft_putstr_color_fd(char const *s, char const *ec, int fd);
void			ft_putendl_color(char const *s, char const *ec);
void			ft_putendl_color_fd(char const *s, char const *ec, int fd);

void			ft_putnbr_ll_fd(long long n, int fd);
void			ft_putnbr_ll(long long n);

void			ft_putlst(t_list *lst);
void			ft_putlst_fd(t_list *lst, int fd);

#endif
