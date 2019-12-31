# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/09 15:17:46 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testlstdel
SRCS = lstdel_test.c \
	   ../../srcs/bonus/ft_lstdel.c \
	   ../../srcs/bonus/ft_lstdelone.c \
	   ../../srcs/bonus/ft_lstnew.c \
	   ../../srcs/fromc/ft_strdup.c \
	   ../../srcs/fromc/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm -f $(NAME)

re: fclean all
