# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aascedu <aascedu@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 12:57:46 by aascedu           #+#    #+#              #
#    Updated: 2022/12/06 16:20:21 by aascedu          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_DIR = ./libft/

HEADER = ./include/push_swap.h

SRCS_DIR = ./src/
SRCS = push_swap.c

OBJS_DIR = ./objects/
OBJS = $(SRCS:.c=.o)
OBJS_FILES = $(addprefix $(OBJS_DIR), $(OBJS))

CC = cc
CFLAGS = -Wall -Werror -Wextra -I./include/
RM = rm -rf

all : $(OBJS_DIR)
	make $(NAME)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS_FILES)
	$(CC) $(CFLAGS) -o $(NAME) -c $<

clean :
	$(RM) $(OBJS_DIR)
	make clean -C $(LIBFT_DIR)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re : fclean
	make all

.PHONY : all clean fclean re
