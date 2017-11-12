#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);
//void	*ft_memcpy(void *dst, const void *src, size_t n);

int		main(void)
{
	unsigned char str[17] = "abcdef";	
	unsigned char str77[17] = "abcdef";		
	unsigned char strcpy[17] = "abcdef";	

	printf ("str old: %s\n", str);
	memmove ( (str+2), str, 6);
	printf ("str new: %s\n\n", str);

	printf ("str77 old: %s\n", str77);
	ft_memmove( (str77+2), str77, 6);
	printf("str77 new: %s\n\n", str77);

	printf ("strcpy old: %s\n", strcpy);
	memcpy( (strcpy+2), strcpy, 6);
	printf("strcpy new: %s\n", strcpy);
	return (0);
}
