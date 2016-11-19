# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 22:23:03 by jortiz-           #+#    #+#              #
#    Updated: 2016/11/08 12:33:59 by jortiz-          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror -c
INCLUDES = -I /includes/
OBJS = ft_putchar.o	ft_putstr.o	ft_strcmp.o	ft_strlen.o ft_swap.o

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(INCLUDES) 
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	
clean:
	/bin/rm -f $(OBJS)

fclean: clean 
	/bin/rm -f $(NAME)
re:
	fclean all
