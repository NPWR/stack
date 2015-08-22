# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebitsch <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/22 14:34:51 by ebitsch           #+#    #+#              #
#    Updated: 2015/08/22 14:48:21 by ebitsch          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
SRC		= *.c
OBJ		= *.o
FLGS	= -c
NAME	= lib/libtree.a

all		:
	$(CC) $(FLGS) $(SRC)
	mkdir lib
	ar -rcs $(NAME) $(OBJ)
	cp ft_btree.h lib/
	make clean

clean	:
	rm *.o

fclean	: clean
	rm -rf lib/
