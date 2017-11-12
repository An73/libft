#include <stdio.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n);

int		main(void)
{
	char	s1[] = "asdf";
	char	s2[] = "asdfg";

	printf("%d\n", ft_strnequ(s1, s2, 5));
}
