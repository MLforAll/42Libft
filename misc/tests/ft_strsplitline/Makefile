# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/12 22:08:52 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrsplitline
SRCS = strsplitline_test.c \
		../../../libft.a

all: $(NAME)

$(NAME):
	make re -C ../../.. && make clean -C ../../..
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
