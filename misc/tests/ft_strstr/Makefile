# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/09 13:16:06 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrstr
SRCS = strstr_test.c \
	   ../../srcs/fromc/ft_strstr.c \
	   ../../srcs/fromc/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
