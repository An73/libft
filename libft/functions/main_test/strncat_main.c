#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n);

int		main(void)
{
	char	app[50] = "123456789";
	char	dst[50] = "000000000";
	char	app77[50] = "123456789";
	char	dst77[50] = "000000000";

	strncat (dst, app, 10);
	ft_strncat(dst77, app77, 10);
	printf("dst: %s\n", dst);
	printf("dst77: %s\n", dst77);

	return (0);
}
