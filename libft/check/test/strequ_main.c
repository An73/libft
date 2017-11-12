#include <stdio.h>
#include <string.h>

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = strcmp((char*)s1, (char*)s2);
	if (i == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
	char	*s1 = "the cake is a lie !\0I'm hidden lol\r\n";
	char	*s2 = "there is no stars in the sky";

	int		i1 = ft_strequ(s1, s2);
	printf("%d\n", i1);
}
