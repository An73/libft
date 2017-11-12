#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char	*n = "\e06050";

	int		i1 = atoi(n);
	int		i2 = ft_atoi(n);

	printf("C: %d\nM: %d\n", i1, i2);
}
