# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2019/12/31 03:06:19 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststructcopy
SRCS = structcopy_test.c

all: $(NAME)

$(NAME): force
	make -C ../../..
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -L../../.. -lft -I../../../includes

force:
	@ true

fclean:
	rm -f $(NAME)

re: fclean all
