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

NAME = testputnbr
SRCS = putnbr_test.c \
	   ../../srcs/supp/ft_putnbr.c \
	   ../../srcs/supp/ft_putchar.c \
	   ../../srcs/supp/ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm -f $(NAME)

re: fclean all
