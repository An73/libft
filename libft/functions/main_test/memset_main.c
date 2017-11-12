#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int		main(void)
{
	unsigned char src[15] = "1234567890";
	unsigned char src77[15] = "2234567890";
	memset(src, '1', 5);
	ft_memset(src77, '1', 5);
	printf("src: %s\n", src);
	printf("src77: %s\n", src77);

	int i77[3] = {-3, 1, 5};
	int i[3] = {-3, 1, 5};
	memset(i, -1, 2 *sizeof(int));
	ft_memset(i77, -1, 2 *sizeof(int));
	printf("\n%d %d %d\n", i[0], i[1], i[2]);
	printf("%d %d %d\n", i77[0], i77[1], i77[2]);
	return (0);
}
