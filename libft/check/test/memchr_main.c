#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	char	*src = "/|\x12\xff\x09\x42\2002\42|\\";
	int		size = 10;

	printf("%s\n", memchr(src, '\200', size));
	printf("%s\n", ft_memchr(src, '\200', size));
}
