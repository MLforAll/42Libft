# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/09 16:16:05 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testmemcmp
SRCS = memcmp_test.c \
	   ../../srcs/fromc/ft_memcmp.c \

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
