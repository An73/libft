#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*s1 = "\0";
	char	*s2 = "\200";

	int		i1 = strcmp(s1, s2);
	int		i2 = ft_strcmp(s1, s2);
	printf("C: %d\nM: %d\n", i1, i2);
}
