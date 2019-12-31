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

NAME = testmemswap
SRCS = memswap_test.c

all: $(NAME)

$(NAME): force
	make -C ../../..
	gcc -Wall -Weverything -Werror -o $(NAME) $(SRCS) -L../../.. -lft -I../../../includes

force:
	@ true

fclean:
	rm -f $(NAME)

re: fclean all
