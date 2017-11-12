#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	char str[] = "ABCDEFG";
	char *ps = memchr(str, 'D', strlen(str));
	char *ps77 = ft_memchr(str, 'D', strlen(str));

	if (ps != NULL)
		printf ("search character found: %s\n", ps);
	else
		printf ("search character not found\n");

	if (ps77 != NULL)
		printf ("search character found: %s\n", ps77);
	else
		printf ("search character not found\n");
	return (0);
}
