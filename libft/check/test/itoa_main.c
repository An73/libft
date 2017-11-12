#include <string.h>
#include <stdio.h>

char	*ft_itoa(int n);

int		main(void)
{
	char	*i1 = ft_itoa(-623);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);

	printf("%s %s %s\n", i1, i2, i3);
}
