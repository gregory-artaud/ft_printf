# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 15:38:17 by gartaud           #+#    #+#              #
#    Updated: 2020/12/04 17:39:40 by gartaud          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -O3
FILES		= ft_printf.c \
				src/fill.c \
				src/convert.c \
				src/t_print.c \
				src/spclen.c \
				src/init_spc.c \
				src/process_spc.c \
				src/get_flag.c \
				src/apply_flags_nb.c \
				src/apply_c.c \
				src/apply_d.c \
				src/apply_p.c \
				src/apply_u.c \
				src/apply_x.c \
				src/apply_big_x.c \
				src/apply_s.c \
				src/apply_percent.c
OBJ			= $(FILES:%.c=%.o)
HEADER		= includes
LIBFT		= libft
TEST_MAIN	= tests/main.c
TEST_EXEC	= tests/exec
#NORME		= ~/.norminette/norminette.rb
NORME		= norminette

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
