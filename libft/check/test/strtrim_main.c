#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/*char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		len;
	int		index;
	int		ifr;

	ifr = 0;
	index = 0;
	len = strlen((char*)s);
	fresh = (char*)malloc(len * sizeof(fresh) + 1);
	while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
		index++;
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[index] != '\0' && index < len)
	{
		fresh[ifr] = s[index];
		ifr++;
		index++;
	}
	fresh[ifr] = '\0';
	return (fresh);
}*/

char	*ft_strtrim(char const *s)
{
	int		i;
	int		index;
	int		len;
	char	*fresh;

	i = 0;
	index = 0;
	len = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		write(1, "1", 1);
		i++;
	}
	printf("i =%d\n", i);
	len = strlen(s) - 1;
	printf("len = %d\n", len);
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
	{
		len--;
		write(1, "0", 1);
	}
	printf("len = =%d\n", len);
	fresh = (char*)malloc((len - i) * sizeof(fresh) + 1);
	while (i <= len)
	{
		fresh[index] = s[i];
		index++;
		i++;
	}
	fresh[index] = '\0';
	return (fresh);
}


int		main(void)
{
	char	*s1 = "\n      \nHellf232\n\n  ";
	char	*s2 = "  \t \n\n \t\t \n\n\nHello \t Please\n Trim me !";

	char	*ret = ft_strtrim(s1);
	//char	*ret2 = ft_strtrim(s2);
	printf("%s\n", ret);
}
