#include <stdio.h>

char	*ft_strnew(size_t size);

int		main(void)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_strnew(5);
	while(str[len + 1] == '\0')
		len++;
	printf("%d\n", len);
}
