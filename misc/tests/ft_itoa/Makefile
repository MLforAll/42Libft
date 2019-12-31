# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/08 14:56:27 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = testitoa
SRCS = itoa_test.c \
	   ../../srcs/supp/ft_itoa.c \
	   ../../srcs/supp/ft_strnew.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm -f $(NAME)

re: fclean all
