#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int ch);

int		main(void)
{
	char str[16] = "0123456789";
	int ch = 'a';
	char *ach;
	char *ach77;

	ach = strrchr(str, ch);
	if (ach == NULL)
		printf("Nothing\n");
	else
		printf("ach: %s\n", ach);

	ach77 = ft_strrchr(str, ch);
	if (ach77 == NULL)
		printf("Nothing\n");
	else
		printf("ach77: %s\n", ach77);
}	
