# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryozuno <ryozuno@42Tokyo>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 18:37:46 by ryozuno           #+#    #+#              #
#    Updated: 2024/01/06 21:04:35 by ryozuno          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRC = ft_printf.c ft_handler.c ft_putnbr.c ft_putstr.c ft_strlen.c
CFLAGS = -Wall -Werror -Wextra
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rsc $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $< -c

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
