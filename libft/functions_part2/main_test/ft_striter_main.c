#include <unistd.h>
#include <ctype.h>

void	ft_striter(char *s, void (*f)(char*));
void	putchar(char *a)
{
	write(1, a, 1);
}

int		main(void)
{
	char	str[] = "asdfgfd";
	ft_striter(str, putchar);
}

