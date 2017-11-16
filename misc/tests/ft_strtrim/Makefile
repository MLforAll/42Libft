# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:27:25 by kdumarai          #+#    #+#              #
#    Updated: 2017/11/11 18:53:26 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = teststrtrim
SRCS = strtrim_test.c \
	   ../../srcs/supp/ft_strtrim.c \
	   ../../srcs/supp/ft_strnew.c \
	   ../../srcs/supp/ft_strsub.c \
	   ../../srcs/fromc/ft_strlen.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I../../includes

fclean:
	rm $(NAME)

re: fclean all
