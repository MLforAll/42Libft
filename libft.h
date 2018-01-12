/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:58:20 by kdumarai          #+#    #+#             */
/*   Updated: 2018/01/12 17:23:40 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

# define BLACKCLR	"\033[0;30m"
# define WHITECLR	"\033[0;37m"
# define YELLOWCLR	"\033[0;33m"
# define REDCLR		"\033[0;31m"
# define PURPLECLR	"\033[0;35m"
# define BLUECLR	"\033[0;34m"
# define CYANCLR	"\033[0;36m"
# define GREENCLR	"\033[0;32m"
# define DEFAULTCLR	"\033[0;39m"

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

void			*ft_memset(void *b, int c, size_t len);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *str);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t len);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_strstr(const char *big, const char *find);
char			*ft_strnstr(const char *big, const char *find, size_t len);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
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
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			ft_putnbr(int n);
void			ft_putendl(char const *s);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char const *s, int fd);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *newchain);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

void			ft_putlst(t_list *lst);
void			ft_tabfree(char ***tab);
void			ft_puttab(char **tab, char *tabname);
void			ft_tabsort(char **tab);
char			*ft_readfd(int fd, size_t buff_size);
int				ft_returnmsg(char *msg, int fd, int retval);
void			ft_putstr_color(char const *s, char const *ec);
void			ft_putstr_color_fd(char const *s, char const *ec, int fd);
void			ft_putendl_color(char const *s, char const *ec);
void			ft_putendl_color_fd(char const *s, char const *ec, int fd);
char			**ft_strsplitline(char const *s);
size_t			ft_tablen(const char **tab);
char			**ft_tabjoin(const char **tab1, const char **tab2);
void			ft_tabsort(char **tab);
int				ft_isupper(int c);
int				ft_islower(int c);
size_t			ft_nbrlen_base(long long n, int base);
size_t			ft_nbrlen(long long n);
void			ft_lstsort(t_list **lst, int (*cmp)(t_list*, t_list*));
void			ft_putnbr_ll_fd(long long n, int fd);
void			ft_putnbr_ll(long long n);
char			*ft_strstart(char *s, char *check);
int				ft_isatty(int fildes);

#endif
