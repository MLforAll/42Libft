# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/09 13:28:10 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testatoi
SRCS = atoi_test.c \
	   ../../srcs/fromc/ft_atoi.c \
	   ../../srcs/fromc/ft_isdigit.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes -D__NOARGS__

fclean:
	rm $(NAME)

re: fclean all
