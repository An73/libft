#include <stdio.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int		main(void)
{
	char	str[] = "0123456789";
	char	*fresh;

	fresh = ft_strsub(str, 2, 5);
	printf("%s\n", fresh);
}
