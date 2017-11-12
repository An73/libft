#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2);

int		main(void)
{
	char	s1[] = "0123";
	char	s2[] = "456789";
	char	*fresh;

	fresh = ft_strjoin(s1, s2);
	printf("%s\n", fresh);
}
