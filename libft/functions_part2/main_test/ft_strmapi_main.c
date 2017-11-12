#include <stdio.h>
#include <string.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	ft_bigg(char a)
{
	if (a >= 97 && a <=122)
		return(a - 32);
	return(a);
}

int		main(void)
{
	char	s[] = "asdsadsd";
	printf("%s\n", ft_strmapi(s, ft_bigg));
}
