# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthurascedu <arthurascedu@student.42ly    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 12:57:46 by aascedu           #+#    #+#              #
#    Updated: 2022/12/11 16:10:51 by arthurasced      ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT_DIR = ./libft/
LIBFT = ./libft/libft.a

HEADER = push_swap.h

SRCS_DIR = ./src/
SRCS = push_swap.c valid_args.c entry_parsing.c
SRCS_FILES = $(addprefix $(SRCS_DIR), $(SRCS))

OBJS_DIR = ./objects/
OBJS = $(SRCS:.c=.o)
OBJS_FILES = $(addprefix $(OBJS_DIR), $(OBJS))

CC = cc
CFLAGS = -Wall -Werror -Wextra -I./include -fsanitize=address
RM = rm -rf

all : $(OBJS_DIR) lib
	@echo "\nNow making : push_swap\n"
	make $(NAME)

lib :
	make -j -C $(LIBFT_DIR)

$(OBJS_DIR) :
	mkdir $(OBJS_DIR)

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c ./include/$(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : $(OBJS_FILES)
	$(CC) $(CFLAGS) ./libft/libft.a $(OBJS_FILES) -o $(NAME)

clean :
	$(RM) $(OBJS_DIR)
	make clean -C $(LIBFT_DIR)

fclean : clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)

re : fclean
	make all

.PHONY : all lib clean fclean re
