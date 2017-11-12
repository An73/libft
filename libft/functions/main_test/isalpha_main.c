#include <ctype.h>
#include <stdio.h>

int		ft_isalpha(int c);

int		main(void)
{
	printf("%d\n", isalpha('S'));
	printf("%d\n", ft_isalpha('S'));
}
