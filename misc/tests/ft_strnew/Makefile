# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/13 19:14:30 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrnew
SRCS = strnew_test.c \
	   ../../../ft_strnew.c \
	   ../../../ft_strdel.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../../

fclean:
	rm -f $(NAME)

re: fclean all
