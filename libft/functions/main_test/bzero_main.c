#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	char	str[15] = "1234567890";
	char	str77[15] = "1234567890";
	int		i[] = {-7, 5, -2};
	int		i77[] = {-7, 5, -2};

	bzero(i, 2 *sizeof(int));
	bzero(str, 5);
	ft_bzero(str77, 5);
	ft_bzero(i77, 2 *sizeof(int));
	printf("%s\n", str);
	printf("%d %d %d\n\n", i[0], i[1], i[2]);
	
	printf("%s\n", str77);	
	printf("%d %d %d\n\n", i77[0], i77[1], i77[2]);
}


