/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:45:23 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/08 22:22:44 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

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

/*static char		*arr(char *str, char c)
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
}*/

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
}