/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 22:36:06 by kdumarai          #+#    #+#             */
/*   Updated: 2018/05/04 22:53:47 by kdumarai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

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
** t_list functions
*/

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *newchain);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

char			**ft_ltot(t_list *lst);

void			ft_lstpush(t_list **alst, t_list *add);
size_t			ft_lstlen(t_list *lst);

void			ft_lstbubblesort(t_list **lst,
								int (*f)(t_list*, t_list*),
								int rev);
void			ft_lstmergesort(t_list **lst,
								int (*f)(t_list*, t_list*),
								int rev);
void			ft_lstinssort(t_list **alst,
								int (*f)(t_list *a, t_list *b),
								int rev);

#endif