# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/21 15:37:57 by ptheo             #+#    #+#              #
#    Updated: 2024/06/25 15:44:47 by ptheo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_FILES = $(wildcard src_lib/*.c)
C_FILES = $(wildcard src/*.c)

SRC_FILES = $(C_FILES) $(LIB_FILES)
MAIN = main.c

OBJ_FILES = $(SRC_FILES:.c=.o)

INCLUDES = ./includes/

C_FLAGS      = -Wall -Wextra -Werror -g3
NAME         = libftprintf.a
CC 			 = cc
RM			 = rm -rf

.c.o:
	$(CC) $(C_FLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ_FILES)

fclean :
	$(RM) $(NAME) $(OBJ_FILES)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

test : 
		$(CC) $(C_FLAGS) $(MAIN) $(SRC_FILES) -I $(INCLUDES)

re : fclean all

.PHONY: all clean fclean re
