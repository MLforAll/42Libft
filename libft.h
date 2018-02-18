/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:58:20 by kdumarai          #+#    #+#             */
/*   Updated: 2018/02/18 04:36:07 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>

/*
** Colors
*/

# define BLACKCLR			"\033[0;30m"
# define REDCLR				"\033[0;31m"
# define GREENCLR			"\033[0;32m"
# define YELLOWCLR			"\033[0;33m"
# define BLUECLR			"\033[0;34m"
# define PURPLECLR			"\033[0;35m"
# define CYANCLR			"\033[0;36m"
# define WHITECLR			"\033[0;37m"
# define DEFAULTCLR			"\033[0;39m"

# define LIGHTBLACKCLR		"\033[0;30m"
# define LIGHTREDCLR		"\033[0;31m"
# define LIGHTGREENCLR		"\033[0;32m"
# define LIGHTYELLOWCLR		"\033[0;33m"
# define LIGHTBLUECLR		"\033[0;34m"
# define LIGHTPURPLECLR		"\033[0;35m"
# define LIGHTCYANCLR		"\033[0;36m"
# define LIGHTWHITECLR		"\033[0;37m"
# define LIGHTDEFAULTCLR	"\033[0;39m"

/*
** TRUE/YES and FALSE/NO
*/

# define YES				1
# define NO					0
# define TRUE				1
# define FALSE				0

/*
** size struct (width/height)
*/

typedef struct	s_size
{
	size_t			width;
	size_t			height;
}				t_size;

/*
** t_list def
*/

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
** libc funcs
*/

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

/*
** Custom ft funcs
*/

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

/*
** t_list functions
*/

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *newchain);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

/*
** Bonus (libc)
*/

int				ft_isupper(int c);
int				ft_islower(int c);

/*
** Bonus (t_list)
*/

void			ft_lstpush(t_list **alst, t_list *add);
size_t			ft_lstlen(t_list *lst);
void			ft_putlst(t_list *lst);
void			ft_putlst_fd(t_list *lst, int fd);
void			ft_lstbubblesort(t_list **lst, int (*f)(t_list*, t_list*), \
	int rev);
void			ft_lstmergesort(t_list **lst, int (*f)(t_list*, t_list*), \
	int rev);
void			ft_lstinssort(t_list **alst, int (*f)(t_list *a, t_list *b), \
	int rev);

/*
** Bonus
*/

char			**ft_tabnew(void);
void			ft_puttab(char **tab, char *tabname);
void			ft_puttab_fd(char **tab, char *tabname, int outfd);
size_t			ft_tablen(const char **tab);
void			ft_tabsort(char **tab);
char			**ft_ltot(t_list *lst);
char			**ft_tabjoin(const char **tab1, const char **tab2);
char			**ft_tabdup(const char **src);
void			ft_tabfree(char ***tab);

char			*ft_readfd(int fd, size_t buff_size);
int				ft_returnmsg(char *msg, int fd, int retval);

unsigned int	ft_strcmpi(const char *s1, const char *s2);
char			*ft_strnjoin(char const *s1, char const *s2, size_t len);
int				ft_stradd(char **str, char *add);
int				ft_strnadd(char **str, char *add, size_t len);
char			*ft_strmulti(char *fmt, ...);
char			**ft_strsplitline(char const *s);
void			ft_strrmc(char **s, char c);
t_list			*ft_splitquote(char *s, char *charset, char qc);
char			*ft_strstart(char *s, char *check);
void			ft_putstr_color(char const *s, char const *ec);
void			ft_putstr_color_fd(char const *s, char const *ec, int fd);
void			ft_putendl_color(char const *s, char const *ec);
void			ft_putendl_color_fd(char const *s, char const *ec, int fd);

size_t			ft_nbrlen_base(long long n, int base);
size_t			ft_nbrlen(long long n);
void			ft_putnbr_ll_fd(long long n, int fd);
void			ft_putnbr_ll(long long n);
char			*ft_lltoa(long long nl);

int				ft_isatty(int fildes);

#endif
