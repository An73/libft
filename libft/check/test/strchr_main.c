#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch);

int		main(void)
{
	char	*src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";

	char	*d1 = strchr(src, '\0');
	char	*d2 = ft_strchr(src, '\0');

	printf("C: %s\nM: %s\n%c", d1, d2, d1[1]);
}
