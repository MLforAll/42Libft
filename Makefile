# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kdumarai <kdumarai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/04 06:10:18 by kdumarai          #+#    #+#              #
#    Updated: 2020/01/10 19:07:43 by kdumarai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
MINNAME = libftmin.a

CFLAGS = -Wall -Werror -Wextra

INCDIR = includes
INCFILES = libft.h \
			btree.h \
			libc.h \
			file.h \
			ft_int.h \
			get_next_line.h \
			list.h \
			mem.h \
			misc.h \
			nbr.h \
			print.h \
			str.h \
			t_str.h \
			t_tab.h \
			wordtab.h
INCLUDES = $(addprefix $(INCDIR)/, $(INCFILES))

SRCDIR = srcs
LIBCSRCFILES = libc/ft_strnstr.c \
	libc/ft_strcat.c \
	libc/ft_strlen.c \
	libc/ft_strchr.c \
	libc/ft_strpbrk.c \
	libc/ft_strcmp.c \
	libc/ft_strdup.c \
	libc/ft_strcpy.c \
	libc/ft_strndup.c \
	libc/ft_strlcat.c \
	libc/ft_bzero.c \
	libc/ft_strncat.c \
	libc/ft_atoi.c \
	libc/ft_memccpy.c \
	libc/ft_memchr.c \
	libc/ft_memcmp.c \
	libc/ft_memcpy.c \
	libc/ft_strncmp.c \
	libc/ft_memmove.c \
	libc/ft_memset.c \
	libc/ft_strncpy.c \
	libc/ft_strrchr.c \
	libc/ft_strstr.c \
	libc/ft_tolower.c \
	libc/ft_toupper.c \
	libc/ft_isalnum.c \
	libc/ft_isalpha.c \
	libc/ft_isascii.c \
	libc/ft_isdigit.c \
	libc/ft_islower.c \
	libc/ft_isprint.c \
	libc/ft_isupper.c
LIBCSRCS = $(addprefix $(SRCDIR)/, $(LIBCSRCFILES))
SRCFILES = misc/get_next_line.c \
	mem/ft_memalloc.c \
	mem/ft_memdel.c \
	mem/ft_memrev.c \
	mem/ft_memintcpy.c \
	mem/ft_memcpyf.c \
	mem/ft_memswap.c \
	list/ft_lstnew.c \
	list/ft_lstnewom.c \
	list/ft_lstnew_nomalloc.c \
	list/ft_lstadd.c \
	list/ft_lstpush.c \
	list/ft_lstdel.c \
	list/ft_lstdelone.c \
	list/ft_lstiter.c \
	list/ft_lstmap.c \
	list/ft_lstlen.c \
	list/ft_lstbubblesort.c \
	list/ft_lstmergesort.c \
	list/ft_lstinssort.c \
	list/ft_ltot.c \
	list/ft_lstnodefree.c \
	list/ft_dlstnew.c \
	list/ft_dlstadd.c \
	list/ft_dlstpush.c \
	list/ft_dlstdel.c \
	list/ft_dlstdelone.c \
	list/ft_dlstlen.c \
	btree/ft_btnew.c \
	btree/ft_btattach.c \
	btree/ft_btdelone.c \
	btree/ft_btdel.c \
	nbr/ft_nbrlen.c \
	nbr/ft_nbrlen_base.c \
	nbr/ft_nbrcpy.c \
	nbr/ft_nbrcat.c \
	nbr/ft_untob.c \
	nbr/ft_itoa.c \
	nbr/ft_lltoa.c \
	nbr/ft_secatoi.c \
	print/strprint/ft_putchar.c \
	print/strprint/ft_putchar_fd.c \
	print/strprint/ft_putnchar.c \
	print/strprint/ft_putnchar_fd.c \
	print/strprint/ft_putendl.c \
	print/strprint/ft_putendlmax.c \
	print/strprint/ft_putendlmax_fd.c \
	print/strprint/ft_putendl_fd.c \
	print/strprint/ft_putendlsec.c \
	print/strprint/ft_putendlsec_fd.c \
	print/strprint/ft_putstr.c \
	print/strprint/ft_putstrmax.c \
	print/strprint/ft_putstrmax_fd.c \
	print/strprint/ft_putstrsec.c \
	print/strprint/ft_putstrsec_fd.c \
	print/strprint/ft_putstr_fd.c \
	print/ft_putlst.c \
	print/ft_putlst_fd.c \
	print/ft_uputnbr.c \
	print/deprecated/ft_putnbr.c \
	print/deprecated/ft_putnbr_fd.c \
	print/deprecated/ft_putnbrl.c \
	print/deprecated/ft_putnbrl_fd.c \
	print/deprecated/ft_putnbr_ll.c \
	print/deprecated/ft_putnbr_ll_fd.c \
	print/color/ft_putendl_color.c \
	print/color/ft_putendl_color_fd.c \
	print/color/ft_putstr_color.c \
	print/color/ft_putstr_color_fd.c \
	print/ft_puttab.c \
	print/ft_puttab_fd.c \
	print/ft_putubt.c \
	print/ft_hexdump.c \
	misc/ft_readfd.c \
	misc/ft_returnmsg.c \
	misc/ft_fatal.c \
	misc/ft_isatty.c \
	misc/ft_switch.c \
	misc/ft_args_opts.c \
	misc/ft_structcopy.c \
	string/ft_strclr.c \
	string/ft_strcmpi.c \
	string/ft_strchrf.c \
	string/ft_strdel.c \
	string/ft_strequ.c \
	string/ft_striter.c \
	string/ft_striteri.c \
	string/ft_strjoin.c \
	string/ft_strnjoin.c \
	string/ft_stradd.c \
	string/ft_strnadd.c \
	string/ft_strisnumeric.c \
	string/ft_strclen.c \
	string/ft_strmap.c \
	string/ft_strmapi.c \
	string/ft_strnequ.c \
	string/ft_strnew.c \
	string/ft_strnew_replace.c \
	string/ft_strstart.c \
	string/ft_strdiff.c \
	string/ft_strsplit.c \
	string/ft_strsplit_charset.c \
	string/ft_strrmc.c \
	string/ft_strsub.c \
	string/ft_strtrim.c \
	string/get_last_component.c \
	string/ft_strrev.c \
	wordtab/ft_tabnew.c \
	wordtab/ft_tabfree.c \
	wordtab/ft_tabjoin.c \
	wordtab/ft_tabaddstr.c \
	wordtab/ft_tabadd.c \
	wordtab/ft_tabdup.c \
	wordtab/ft_tablen.c \
	wordtab/ft_tabsort.c \
	t_str/ft_tstrnew.c \
	t_str/ft_tstrnew_cpy.c \
	t_str/ft_tstrdel.c \
	t_str/ft_tstrclr.c \
	t_str/ft_tstrcpy.c \
	t_str/ft_tstr_cpycore.c \
	t_str/ft_tstrncpy.c \
	t_str/ft_tstrcat.c \
	t_str/ft_tstrncat.c \
	t_str/tstrcpy_core.c \
	t_str/tstrcat_core.c \
	t_tab/ft_ttabnew.c \
	t_tab/ft_ttabnew_cpy.c \
	t_tab/ft_ttabcat.c \
	t_tab/ft_ttabdel.c \
	file/get_name_from_path.c \
	file/get_name_from_path_2.c \
	file/get_basedir.c \
	file/get_elem_path.c
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))

OBJDIR = objs
OBJS = $(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
LIBCOBJS = $(LIBCSRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

LIBCUSTOMNAME = $(OBJDIR)/libft_custom.a
LIBCNAME = $(OBJDIR)/libft_libc.a

ifeq ($(shell which bc >/dev/null && which awk >/dev/null && echo true),true)
	CUSTOMNSRC = $(shell echo "$(SRCS)" | awk '{print NF}')
	LIBCNSRC = $(shell echo "$(LIBCSRCS)" | awk '{print NF}')
	NSRC = $(shell echo "$(CUSTOMNSRC) + $(LIBCNSRC)" | bc)
	CSRC = 1
else
	CSRC = 0
endif

PROJTEXT = \033[1;34m$(basename $(NAME)): \033[0;39m

all: $(NAME)

min: $(MINNAME)

$(MINNAME): $(LIBCUSTOMNAME)
	@ printf "\033[K$(PROJTEXT)Compiling\n"
	@ printf "$(PROJTEXT)Linking\n"
	@ libtool $? -o $@
	@ rm -f $?
	@ printf "$(PROJTEXT)\033[1;32mMinimum Lib built at $@\033[0;39m\n"

$(NAME): $(LIBCNAME) $(LIBCUSTOMNAME)
	@ printf "\033[K$(PROJTEXT)Compiling\n"
	@ printf "$(PROJTEXT)Linking\n"
	@ libtool $(LIBCNAME) $(LIBCUSTOMNAME) -o $@
	@ printf "$(PROJTEXT)\033[1;32mLib built at $@\033[0;39m\n"

$(LIBCNAME): $(LIBCOBJS) $(INCLUDES)
	@ printf "\033[K"
	@ ar rcs $@ $(LIBCOBJS)

$(LIBCUSTOMNAME): $(OBJS) $(INCLUDES)
	@ printf "\033[K"
	@ ar rcs $@ $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(INCLUDES)
	@ if [ ! -d $(dir $@) ]; then mkdir -p $(dir $@); fi
	@ printf "\033[K$(PROJTEXT)Compiling \033[1;33m$<"
ifneq ($(CSRC),0)
	@ printf " %.0s" {1..$(shell expr 40 - $(shell printf "$<" | wc -m))}
	@ export LC_ALL=C; printf "\033[1;34m[%3.0f%%]" "$(shell bc <<< "scale=1; $(CSRC) / $(NSRC) * 100")"
	@ $(eval CSRC = $(shell expr $(CSRC) + 1))
endif
	@ printf "\033[0;39m\r"
	@ gcc $(CFLAGS) -I includes -c $< -o $@

clean:
	@ rm -rf $(OBJDIR)
	@ printf "$(PROJTEXT)Removed objects\n"

fclean: clean
	@ rm -f $(NAME) $(MINNAME) $(LIBCNAME) $(LIBCUSTOMNAME)
	@ printf "$(PROJTEXT)Removed $(NAME)\n"

re: fclean all

.PHONY: all clean fclean re min
