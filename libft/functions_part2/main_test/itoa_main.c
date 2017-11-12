#include <stdio.h>
#include <string.h>

char	*ft_itoa(int n);

int		main(void)
{
	int		num;

	num = -1234567890;
	printf("%s\n", ft_itoa(num));
}
	/*int		num = -123456789;
	int		a = num % 10;
	int		b = num / 10;
	int		i;

	i = 0;
	while (num)
	{
		num = num / 10;
		i++;
	}
	printf("%d %d\n%d", a, b, i);*/
