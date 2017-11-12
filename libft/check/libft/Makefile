SRCS = srcs/*.c
OBJ = *.o
INCL = includes/
GCC = gcc -c $(SRCS) -I$(INCL)
ARC = ar rc libft.a *.o

all: $(SRCS) $(INCL)
	$(GCC)
	$(ARC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f libft.a

re: fclean all
