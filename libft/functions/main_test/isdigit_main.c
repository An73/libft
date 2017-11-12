#include <ctype.h>
#include <stdio.h>

int		ft_isdigit(int c);

int		main(void)
{
	printf("%d\n", isdigit('s'));
	printf("%d\n", ft_isdigit('s'));
}
