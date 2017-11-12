#include <stdio.h>
#include <stdlib.h>
void	*ft_memalloc(size_t size);

int		*ft_range(int min, int max)
{
	int		*ran;
	int		index;
	int		leng;

	leng = 0;
	index = min;
	while (index < max)
	{
		index++;
		leng++;
	}
	if (leng > 0)
	{
		ran = ft_memalloc(sizeof(int) * leng);
		index = 0;
		while (min < max)
		{
			ran[index] = min;
			index++;
			min++;
		}
		return (ran);
	}
	return (0);
}

int		main(void)
{
	int		*ran = ft_range(-1000000, 20000000);

	printf("%d\n", ran[20000000]);
	return (0);
}
