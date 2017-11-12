#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	*src = "--> nyancat <--\n\r";
	char	dst1[30];

	memset(dst1, 'a', sizeof(dst1));
	char	*r1 = strcpy(dst1, src);
	char	*r2 = ft_strcpy(dst1, src);

	printf("C:%s\n", r1);
	printf("M:%s\n", r2);

	char	b[1];
	r1 = ft_strcpy(b, "");
	r2 = ft_strcpy(b, "");
	
	printf("%s\n", r1);
	printf("%s\n", r2);
	//printf("%s\n", strcpy(dst2, src));
}
