#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int ch);

int		main(void)
{
	char str[11] = "0123456789";
	int ch = 'l';
	char *ach;
	char *ach77;

	ach = strchr(str, ch);
	if (ach == NULL)
		printf("Nothing\n");
	else
		printf("ach: %s\n", ach);

	ach77 = ft_strchr(str, ch);
	if (ach77 == NULL)
		printf("Nothing\n");
	else
		printf("ach77: %s\n", ach77);
}	
