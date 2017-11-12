#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

int		main(void)
{
	char	buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char	buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char	*src = "string with\200inside !";

	printf("%s\n", memccpy(buff1, src, '\200', 21));
	printf("%s\n", ft_memccpy(buff2, src, '\200', 21));
}
