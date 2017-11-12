#include <stdio.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c);

int		main(void)
{
	char	**str;

	str = ft_strsplit("***hello*fellow***students***", '*');
	printf("%s %s %s\n", str[0], str[1], str[2]);
}
