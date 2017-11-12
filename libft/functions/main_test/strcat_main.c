#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, const char *s2);

int		main(void)
{
	char	app[50] = "2second string";
	char	dst[50] = "first string";
	char	app77[50] = "2second string";
	char	dst77[50] = "first string";

	strcat (dst, app);
	ft_strcat(dst77, app77);
	printf("dst: %s\n", dst);
	printf("dst77: %s\n", dst77);

	return (0);
}
