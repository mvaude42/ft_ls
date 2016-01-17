# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:08:51 by mvaude            #+#    #+#              #
#    Updated: 2015/03/19 07:35:39 by mvaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=		ft_ls

CFLAGS		+=		-g -Wall -Werror -Wextra

SRC			=		ft_ls.c \
                    main.c \
                    ft_env.c

CC          =       clang

SRC_PATH	=		./

H_PATH		=		./libft/includes

LIB_PATH	=		./libft


SRC_FILES	=		$(addprefix $(SRC_PATH), $(SRC))

OBJ			=		$(SRC_FILES:.c=.o)

LIB_OBJ		=		$(addprefix $(LIB_PATH)/, $(shell ls -1 $(LIB_PATH) | grep "\.o"))

SHIT		=		$(SRC_FILES:.c=.c~)

all			:		
	@make -C $(LIB_PATH)
	@make $(NAME)

$(NAME)		:		$(OBJ)
	$(CC) $(OBJ) -I$(H_PATH) -I$(SRC_PATH) -L$(LIB_PATH) -lft -o $(NAME)

%.o			:		$(SRC_PATH)/%.c
	$(CC) -o $@ -I$(H_PATH) -I$(SRC_PATH) -c $^

clean		:
	rm -f $(OBJ)
	rm -f libft.h.gch

fclean		:		clean
	rm -f $(NAME)

re			:		fclean all

shit		:		clean
	rm -f Makefile~
	rm -f ft_ls.h~
	rm -f $(SHIT)

.PHONY		:		clean, fclean, re, shit, push
