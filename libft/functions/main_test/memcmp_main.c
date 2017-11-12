#include <stdio.h>
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(void)
{
	unsigned char src[15] = "12q34567890";
	unsigned char dst[15] = "1234567890";
	unsigned char src77[15] = "12q34567890";
	unsigned char dst77[15] = "1234567890";

	if (memcmp (src, dst, 10) == 0)
		printf("Ident\n");
	else
		printf("%d\n", memcmp(src, dst, 10));
	if (ft_memcmp (src77, dst77, 10) == 0)
		printf("Ident\n");
	else
		printf("%d\n", ft_memcmp(src77, dst77, 10));

	return (0);
}
