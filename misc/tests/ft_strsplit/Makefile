# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/16 13:18:49 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrsplit
SRCS = strsplit_test.c \
	   ../../srcs/supp/ft_strsub.c \
	   ../../srcs/supp/ft_strnew.c \
	   ../../srcs/supp/ft_strsplit.c \
	   ../../../ft_tabfree.c

all: $(NAME)

$(NAME):
	clang -fsanitize=address -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
