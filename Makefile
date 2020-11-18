# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 15:38:17 by gartaud           #+#    #+#              #
#    Updated: 2020/11/18 16:56:05 by gartaud          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -O2
FILES		= ft_printf.c \
				src/ft_fill.c
OBJ			= $(FILES:%.c=%.o)
HEADER		= includes
LIBFT		= libft
TEST_MAIN	= tests/main.c
TEST_EXEC	= tests/exec

all: $(NAME)

$(NAME): $(OBJ)
	make -sC $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(TEST_EXEC)

fclean: clean
	rm -f $(NAME)
	@make -sC $(LIBFT) fclean

re: fclean all

test: $(NAME)
	$(CC) $(CFLAGS) $(TEST_MAIN) $(NAME) -o $(TEST_EXEC)
	clear
	@./$(TEST_EXEC)

.PHONY: clean fclean all re
