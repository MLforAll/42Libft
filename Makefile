# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 06:10:18 by kdumarai          #+#    #+#              #
#    Updated: 2018/01/22 01:10:51 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_islower.c \
	ft_isprint.c \
	ft_isupper.c \
	ft_itoa.c \
	ft_lltoa.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstbubblesort.c \
	ft_lstmergesort.c \
	ft_lstinssort.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_nbrlen.c \
	ft_nbrlen_base.c \
	ft_putchar.c \
	ft_putchar_fd.c \
	ft_putendl.c \
	ft_putendl_color.c \
	ft_putendl_color_fd.c \
	ft_putendl_fd.c \
	ft_putlst.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_color.c \
	ft_putstr_color_fd.c \
	ft_putstr_fd.c \
	ft_puttab.c \
	ft_readfd.c \
	ft_returnmsg.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strdel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strnjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strsplit.c \
	ft_strsplitline.c \
	ft_strstr.c \
	ft_strsub.c \
	ft_strtrim.c \
	ft_tabfree.c \
	ft_tabjoin.c \
	ft_tablen.c \
	ft_tabsort.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_putnbr_ll.c \
	ft_putnbr_ll_fd.c \
	ft_strstart.c \
	ft_isatty.c

OBJS = $(SRCS:%.c=%.o)

PROJTEXT = \033[1;34mlibft: \033[0;39m

all: $(NAME)

$(NAME): $(OBJS)
	@ printf "\r\033[K$(PROJTEXT)Compiling\n"
	@ printf "$(PROJTEXT)Linking\n"
	@ ar rcs $(NAME) $?
	@ printf "$(PROJTEXT)\033[1;32mLib built at $(NAME)\033[0;39m\n"

%.o: %.c
	@ printf "\033[K$(PROJTEXT)Compiling \033[1;33m$<\033[0;39m\r"
	@ gcc $(CFLAGS) -c $<

clean:
	@ rm -f $(OBJS)
	@ printf "$(PROJTEXT)Removed objects\n"

fclean: clean
	@ rm -f $(NAME)
	@ printf "$(PROJTEXT)Removed $(NAME)\n"

re: fclean all

.PHONY: all clean fclean re
