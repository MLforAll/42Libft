# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/11 14:07:58 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testlstmap
SRCS = ../../srcs/bonus/ft_lstmap.c \
	   ../../srcs/bonus/ft_lstnew.c \
	   ../../srcs/bonus/ft_lstdelone.c \
	   ../../srcs/fromc/ft_strdup.c \
	   ../../srcs/fromc/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) lstmap_test.c $(SRCS) -I../../includes

unittest:
	gcc -Wall -Wextra -Werror -o $(NAME) lstmap_test2.c $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
