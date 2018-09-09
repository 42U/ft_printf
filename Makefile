# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_2                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/23 15:49:11 by issmith           #+#    #+#              #
#    Updated: 2018/09/09 05:23:23 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ANAME = Ft_Printf
NAME = ft_printf

#	files
FILENAMES = main.c

#	paths
SRCS =$(addprefix srcs/, $(FILENAMES))
OBJS =$(addprefix $(ODIR), $(FILENAMES:.c=.o))
ODIR = ./build/
IDIR = ./incl/

#	libraries
LIBFT = ./libft/libft.a
FTINC = -I./libft
FTLNK = -L./libft -lft

LIBFTP = ./ft_printf.a
FTPINC = -I./
FTPLNK = -L./ -lft_printf

#	commands
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFLAGS += -I incl/
RM = rm -rf

#	colors
RESET = \033[0m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
CYAN = \033[36m
WHITE = \033[37m

.PHONY: clean fclean re make all

#	rules
all: $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(FTLNK)
	@echo "$(RESET)$(RED)Building binary....$(WHITE)$(RESET)"
	@echo "$(GREEN)OK! its ready...$(RESET)"

$(ODIR)%.o: srcs/%.c | build
	@echo "$(WHITE).$(RESET)"
	@echo "$(CYAN)$(ANAME)..$(WHITE)$(RESET)"
	@echo "$(YELLOW)Compiling...$(RESET)"
	@$(CC) $(CFLAGS) -I$(INCDIR) $(FTINC) -o $@ -c $<

re: fclean all

clean:
	@echo "$(RED)Removing $(ODIR)..$(RESET)"
	@$(RM) $(ODIR)
	@echo "$(BLUE)done$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME) binary$(RESET)"
	@$(RM) $(NAME)*
	@$(RM) a.out*
	@echo "$(BLUE)done$(RESET)"

dbg:
	@$(CC) -g $(CFLAGS) $(LIBFT) $(SRCS)

build:
	@mkdir -p $(ODIR)

