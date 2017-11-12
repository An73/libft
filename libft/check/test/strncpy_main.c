#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, const char *src, size_t n);

int		main(void)
{
	char	*src = "";
	char	dst1[30];
	char	dst2[30];
	size_t	max = 29;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));

	printf("C: %s\n", strncpy(dst1, src, max));
	printf("M: %s\n", ft_strncpy(dst2, src, max));
}	
