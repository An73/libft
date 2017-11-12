#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little);

int		main(void)
{
	char str1[11] = "0123456789";
	char str2[10] = "34";
	char *istr;
	char *istr77;

	istr = strnstr(str1, str2, 7);
	printf("%s\n", istr);
	istr77 = strnstr(str1, str2, 7);
	printf("%s\n", istr77);
}
