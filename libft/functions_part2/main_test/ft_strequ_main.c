#include <stdio.h>

int		ft_strequ(char const *s1, char const *s2);

int		main(void)
{
	char	s1[] = "asdf";
	char	s2[] = "asdfg";

	printf("%d\n", ft_strequ(s1, s2));
}
