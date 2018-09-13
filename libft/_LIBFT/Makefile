# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 19:52:51 by issmith           #+#    #+#              #
#    Updated: 2018/09/09 08:56:53 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra -c

SRC = ft_*.c

OUT = ft_*.o

.PHONY: clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I libft.h
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)
	rm -f $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
