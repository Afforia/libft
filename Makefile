# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thaley <thaley@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/18 17:12:23 by thaley            #+#    #+#              #
#    Updated: 2019/04/20 02:57:57 by thaley           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CFLAGS = -Wall -Wextra -Werror -g

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC) libft.h
	gcc $(OBJ) -o $(NAME)

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
