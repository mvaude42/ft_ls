# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:08:51 by mvaude            #+#    #+#              #
#    Updated: 2015/03/26 19:20:36 by mvaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		libft.a

CC			=		gcc

CFLAGS		+=		-Wall -Werror -Wextra

SRC			=		check_malloc.c \
					ft_abs.c \
					ft_atoi.c \
					ft_bzero.c \
					ft_calloc.c \
					get_next_line.c \
					ft_intlen.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isblank.c \
					ft_iscntrl.c \
					ft_isdigit.c \
					ft_isgraph.c \
					ft_isprint.c \
					ft_islower.c \
					ft_ispunct.c \
					ft_issign.c \
					ft_isspace.c \
					ft_isupper.c \
					ft_isxdigit.c \
					ft_itoa_imax.c \
					ft_itoa_l.c \
					ft_itoa_wchar.c \
					ft_itoa.c \
					ft_lstadd.c \
					ft_lstdel.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlen.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_memalloc.c \
					ft_memccpy.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memdel.c \
					ft_memmove.c \
					ft_memset.c \
					ft_pow.c \
					ft_putchar.c \
					ft_putchar_fd.c \
					ft_putendl.c \
					ft_putendl_fd.c \
					ft_putnbr.c \
					ft_putnbr_fd.c \
					ft_putstr.c \
					ft_putstr_fd.c \
					ft_realloc.c \
					ft_sqrt.c \
					ft_strcasecmp.c \
					ft_strcasestr.c \
					ft_strcat.c \
					ft_strchr.c \
					ft_strclr.c \
					ft_strcmp.c \
					ft_strcpy.c \
					ft_strcspn.c \
					ft_strdel.c \
					ft_strdup.c \
					ft_strequ.c \
					ft_stricmp.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strjoin_s2_freed.c \
					ft_strlcat.c \
					ft_strlen.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strncasecmp.c \
					ft_strncat.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnequ.c \
					ft_strnew.c \
					ft_strnstr.c \
					ft_strpbrk.c \
					ft_strrchr.c \
					ft_strrev.c \
					ft_strsplit.c \
					ft_strspn.c \
					ft_strstr.c \
					ft_strsub.c \
					ft_strtrim.c \
					ft_swap.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_wcslen.c \
					ft_wcstombs.c \
					ft_wordcount.c

SRC_PATH	=		./

H_PATH		=		./includes

CFLAGS		+=		-I$(H_PATH)

SRC_FILES	=		$(addprefix $(SRC_PATH), $(SRC))

OBJ			=		$(SRC_FILES:.c=.o)

SHIT		=		$(SRC_FILES:.c=.c~)

all			:		$(NAME)

$(NAME)		:		$(OBJ)
	$(AR) -rcs $@ $^

clean		:
	rm -f $(OBJ)
	rm -f libft.h.gch

fclean		:		clean
	rm -f $(NAME)

re			:		fclean all

shit		:		clean
	rm -f Makefile~
	rm -f libft.h~
	rm -f $(SHIT)

push		:
	@git add Makefile
	@git add includes/*.h
	@git add $(SRC)
	@git comimt -m "$(filter-out $@, $(MAKECMDGOALS))"
	@git push

.PHONY		:		clean, fclean, re, shit, push
