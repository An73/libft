#include <stdio.h>
#include <string.h>

size_t		ft_strlcat(char *s1, const char *s2, size_t n);

int		main(void)
{
	char	dst[50] = "123456789";
	char	src[] = "000000000";
	int		num;
	char	dst77[50] = "123456789";
	char	src77[] = "000000000";
	int		num77;

	num = strlcat(dst, src, 20);
	printf("num: %d\n", num);
	num77 = ft_strlcat(dst77, src77, 20);
	printf("num: %d\n", num77);
	printf("dst77: %s\n", dst77);
	printf("dst: %s\n", dst);
}
