# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/08 18:53:22 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrlcat
SRCS = strlcat_test.c \
	   ../../srcs/fromc/ft_strlcat.c \
	   ../../srcs/fromc/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes -D __MY__

fclean:
	rm $(NAME)

re: fclean all
