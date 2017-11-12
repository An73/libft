#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c);

int		main(void)
{
	printf("%d\n", toupper(96));
	printf("%d\n", ft_toupper(96));
}
