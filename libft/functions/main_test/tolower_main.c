#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c);

int		main(void)
{
	printf("%d\n", tolower(91));
	printf("%d\n", ft_tolower(91));
}
