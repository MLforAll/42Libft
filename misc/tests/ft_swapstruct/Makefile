# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/07 19:15:59 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testswapstruct
SRCS = swapstruct_test.c

all: $(NAME)

$(NAME):
	make -C ../../..
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -L../../.. -lft -I../../../includes

fclean:
	rm $(NAME)

re: fclean all
