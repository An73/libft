#include <stdio.h>
#include <string.h>

char	*ft_strstr(const char *big, const char *little);

int		main(void)
{
	char	*s1 = "MZIRIMZIRIBMZP";
	char	*s2 = "MZIRIBMZP";

	char	*i1 = strstr(s1, s2);
	char	*i2 = ft_strstr(s1, s2);
	printf("C: %s\nM: %s\n", i1, i2);
}
