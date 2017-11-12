#include <string.h>
#include <stdio.h>

char	*ft_strstr(const char *big, const char *little);

int		main(void)
{
	char str1[11] = "0123456789";
	char str2[10] = "34";
	char *istr;
	char *istr77;

	istr = strstr(str1, str2);
	printf("%s\n", istr);
	istr77 = strstr(str1, str2);
	printf("%s\n", istr77);
}
