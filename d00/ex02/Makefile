# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akinfemi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/08 18:35:28 by akinfemi          #+#    #+#              #
#    Updated: 2018/01/08 18:36:15 by akinfemi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = clang++

CFLAGS = -Wall -Werror -Wextra

SRC = Account.class.cpp tests.cpp

all:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean