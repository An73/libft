#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	printf("%d\n", atoi("		+-123fdgdfg"));
	printf("%d\n", ft_atoi("		+-123fdgdfg"));
}
