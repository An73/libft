deletef = /bin/rm -f

all: srcs/*.c
	gcc -c srcs/*.c
	ar rc libft.a *.o
clean:
	$(deletef) *.o
fclean: clean
	/bin/rm -f libft.a
re: fclean all
