#include <stdio.h>
#include <string.h>
#include <stdint.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(void)
{
	uint8_t *s1 = (uint8_t *)"\xff\xaa\xde\x12";
	uint8_t *s2 = (uint8_t *)"\xff\xaa\xde\x12MACOSAAAAA";
	size_t size = 4;
	printf("%d\n", memcmp(s1, s2, size));
	printf("%d\n", ft_memcmp(s1, s2, size));
}
