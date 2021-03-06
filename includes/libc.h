/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libc.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2020/02/29 17:58:32 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H

# include <string.h>
# include <termios.h>

# define GETOPT_ERR_NOMORE	-1
# define GETOPT_ERR_ILL		-2
# define GETOPT_ERR_REQ		-3

extern const char	*g_optarg;
extern int			g_optind;
extern int			g_optopt;
extern int			g_opterr;
extern int			g_optreset;

int		ft_getopt(int ac, const char **av, const char *optstring);
void	ft_getopt_error(const char **av, int opt, int type);

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strndup(const char *s1, size_t len);
char	*ft_strnstr(const char *big, const char *find, size_t len);
char	*ft_strpbrk(const char *s, const char *charset);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *big, const char *find);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_getenv(const char *name);
int		ft_tcgetattr(int fd, struct termios *t);

#endif
