#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s);

int		main(void)
{
	char	str[] = " \t\n 1234567890 \t\n      ";
	char	*fresh;

	fresh = ft_strtrim(str);
	printf("%s\n", fresh);
}
