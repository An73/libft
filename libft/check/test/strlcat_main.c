#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		index;
	size_t		j;

	index = 0;
	j = 0;
	while (s1[index] != '\0')
		index++;
	while (s2[j] != '\0' && j < n)
	{
		s1[index] = s2[j];
		index++;
		j++;
	}
	s1[index] = '\0';
	return (s1);
}

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	len;

	len = 0;
	//s1 = ft_strncat(s1, s2, n);
	if (s2 > s1)
	{
		while (s1[len] != '\0')
			len++;
		while (s2[len] != '\0')
			len++;
	}
	s1 = ft_strncat(s1, s2, n);
	else
	{
		while (s1[len] != '\0')
			len++;
	}
	return (len);
}

int		main(void)
{
	char	*str = "the cake is lite !\0I'm hidden lol\r\n";
	char	buff1[0xF00] = "there is no stars in the sky";
	char	buff2[0xF00] = "there is no stars in the sky";
	size_t	max = strlen(str) + strlen(buff1);

	printf("C: %zu\nM: %zu\n", strlcat(buff1, str, max), ft_strlcat(buff2, str, max));

	char	s1[4] = "";
	char	s2[4] = "";
	printf("C: %zu\n", strlcat(s1, "thx to ntoniolo for this test !", 4));
	printf("M: %zu\n", ft_strlcat(s2, "thx to ntoniolo for this test !", 4));
	printf("C: %s\n", s1);
	printf("M: %s\n", s2);
}
