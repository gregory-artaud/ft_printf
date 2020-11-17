# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gartaud <gartaud@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/17 15:38:17 by gartaud           #+#    #+#              #
#    Updated: 2020/11/17 17:50:04 by gartaud          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -O2
FILES	= ft_printf.c
OBJ		= $(FILES:%.c=%.o)
HEADER	= includes
LIBFT	= libft

all: $(NAME)

$(NAME): $(OBJ)
	make -sC $(LIBFT)
	@cp libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	@make -sC $(LIBFT) fclean

re: fclean all

.PHONY: clean fclean all re
