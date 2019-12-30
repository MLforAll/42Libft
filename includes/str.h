/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2019/12/30 17:31:06 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <string.h>

# define STRREPL_VS	1

size_t			ft_strclen(const char *str, char c);

char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			**ft_strsplit_charset(char const *s, const char *charset);

char			*ft_strnew_replace(const char *s,
								const char *find,
								const char *repl);

char			*ft_strnjoin(char const *s1, char const *s2, size_t len);
int				ft_stradd(char **str, const char *add);
int				ft_strnadd(char **str, const char *add, size_t len);
int				ft_strisnumeric(char *s);
char			*ft_strmulti(char *fmt, ...);
char			*ft_strrmc(char *s, char c);
const char		*ft_strstart(const char *s, const char *check);
char			*ft_strdiff(char *base, const char *check);

const char		*get_last_component(const char *str, char c);

#endif
