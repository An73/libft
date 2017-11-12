#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/*static int		sym(char *s, char c)
{
	int	i;

	i = 0;
	while(*s != '\0')
	{
		while(*s++ != c)
		{
			i++;
			if (*s == c || *s == '\0' )
				return (i);
		}
	}
	return (0);
}

static int		word(char *s, char c)
{
	int	i;

	i = 0;
	while(*s != '\0')
	{
		while(*s++ != c)
		{
			if (*s == c || *s == '\0')
				i++;
		}
	}
	return (i);
}

static char		*arr(char *str, char c)
{
	int		index;
	char	*array;

	index = 0;
	array = (char*)malloc(sizeof(char) * (index + 1));
	while (*str != c && *str != '\0')
	{
		array[index++] = *str++;
		array[index] = '\0';
	}
	return (array);
}

static char		**empty_str()
{
	char	**array;

	array = (char**)malloc(1);
	array[0]= NULL;
	return (array);
}

char	**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;
	int		j;
	int		index;

	if (s)
	{
		str = (char*)s;
		j = 0;
		array = (char**)malloc(sizeof(char*) * word(str, c) + 1);
		if (!array)
			return (NULL);
		if (word(str, c) == 0)
			return (empty_str());
		while (*str)
		{
			while (*str == c)
				str++;
			if (*str == '\0')
				return (array);
			index = sym(str, c);
			array[j] = (char*)malloc(sizeof(char) * (index + 1));
			index = 0;
			while (*str != c && *str != '\0')
			{
				array[j][index++] = *str++;
				array[j][index] = '\0';
			}
			if (*str == '\0')
				return (array);
			j++;
			//write (1, "1", 1);
			array[j] = NULL;
		}
		return (array);
	}
	return (NULL);
}*/

static char		*ft_strcpy_split(char *dest, const char *src, char c)
{
	char	*str;

	str = dest;
	while (*src != c && *src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (str);
}

static int		sym(char *s, char c)
{
	int	i;

	i = 0;
	while(*s != '\0')
	{
		while(*s++ != c)
		{
			i++;
			if (*s == c || *s == '\0' )
				return (i);
		}
	}
	return (0);
}

static int		word(char *s, char c)
{
	int	i;

	i = 0;
	while(*s != '\0')
	{
		while(*s++ != c)
		{
			if (*s == c || *s == '\0')
				i++;
		}
	}
	return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;
	int		j;

	j = 0;
	str = (char*)s;
	array = (char**)malloc(sizeof(char*) * word(str, c) + 1);
	while (*str)
		{
			array[j] = NULL;
			write(1, "1", 1);
			while (*str == c)
				str++;
			if (*str == '\0')
			{
				printf("\n%d\n", j);
				//array[j - 3] = NULL;
				return (array);
			}
			write(1, "2", 1);
			array[j] = (char*)malloc(sizeof(char) * (sym(str, c) + 1));
			write(1, "3", 1);
			array[j] = ft_strcpy_split(array[j], str, c);
			while (*str != c)
			{
				if (*str == '\0')
					return (array);
				str++;
			}
			write(1, "4", 1);
			j++;
			array[j] = NULL;
		}
	return (NULL);
}

int		main(void)
{
	char	*sv = "0 2 2 ";
	//char	*s = "0 0 0 0 0 0 0 0 0";
	//char	*s1 = "1 1 1 1";

	char	**rv = ft_strsplit(sv, ' ');
	//char	**r = ft_strsplit(s, ' ');
	//char	**w = ft_strsplit(s1, ' ');
	printf("\n%s %s %s %s\n", rv[0], rv[1], rv[2], rv[3]);
	//printf("\n%s %s %s\n", r[0], r[1], r[2], r[3], r[4], r[5], r[6], r[7], r[8], r[9]);
	//printf("%s %s %s %s %s\n", w[0], w[1], w[2], w[3], w[4]);
}
