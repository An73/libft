#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main(void)
{
	unsigned char src[15] = "1234567890";
	unsigned char dst[15] = "";
	unsigned char src77[15] = "1234567890:";
	unsigned char dst77[15] = "";

	memccpy (dst, src, 3, 6);
	ft_memccpy (dst77, src77, 3, 6);
	printf ("dst: %s\n", dst);
	printf ("dst77: %s\n", dst77);

	return (0);
}
