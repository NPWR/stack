CC		= gcc
SRC		= *.c
OBJ		= *.o
NAME	= libft.a

all		:
	$(CC) -c $(SRC)
	ar -rc $(NAME) $(OBJ)
clean	:
	rm *.o

fclean	: clean
	rm $(NAME)

btree	: all clean
	mkdir lib
	gcc -c btree/*.c
	ar -rcs libtree.a *.o
	rm *.o
	cp btree/ft_btree.h lib/
	cp libft.h lib/
	cp libtree.a lib/
	cp libft.a lib/
