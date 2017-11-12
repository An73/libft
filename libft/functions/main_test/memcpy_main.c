#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main(void)
{
	unsigned char src[10] = "123456";
	unsigned char dst[10] = "0000";
	unsigned char src77[10] = "123456";
	unsigned char dst77[10] = "0000";

	memcpy (dst, src, 3);
	ft_memcpy (dst77, src77, 3);
	printf("dst: %s\n", dst);
	printf("dst77: %s\n", dst77);

	return (0);
}
