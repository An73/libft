#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n);

int		main(void)
{
	char a[16] = "1234567890";
	char b[16] = "12345067890";

	printf("or: %d\n", strncmp(a, b, 6));
	printf("my: %d\n", ft_strncmp(a, b, 6));
}
