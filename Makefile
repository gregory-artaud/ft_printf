# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 15:38:17 by gartaud           #+#    #+#              #
#    Updated: 2020/11/21 15:35:47 by gartaud          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -O2
FILES		= ft_printf.c \
				src/ft_fill.c \
				src/ft_convert.c \
				src/t_print.c \
				src/ft_spcln.c
OBJ			= $(FILES:%.c=%.o)
HEADER		= includes
LIBFT		= libft
TEST_MAIN	= tests/main.c
TEST_EXEC	= tests/exec
NORME		= ~/.norminette/norminette.rb

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

test: re
	$(CC) $(CFLAGS) $(TEST_MAIN) $(NAME) -o $(TEST_EXEC)
	clear
	bash tests/tests.sh

leaks: $(NAME)
	$(CC) $(CFLAGS) $(TEST_MAIN) $(NAME) -o $(TEST_EXEC)
	clear
	@valgrind --leak-check=full ./$(TEST_EXEC)

norme:
	$(NORME) includes/ft_printf.h ft_printf.c src/*.c

.PHONY: clean fclean all re
