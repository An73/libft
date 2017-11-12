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
	int		i;

	i = 0;
	while (*s != '\0')
	{
		while (*s++ != c)
		{
			i++;
			if (*s == c || *s == '\0')
				return (i);
		}
	}
	return (0);
}

static int		word(char *s, char c)
{
	int		i;

	i = 0;
	while (*s != '\0')
	{
		while (*s++ != c)
		{
			if (*s == c || *s == '\0')
				i++;
		}
	}
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**array;
	int		j;

	j = 0;
	if (s)
	{
		str = (char*)s;
		array = (char**)malloc(sizeof(char*) * word(str, c) + 1);
		while (array)
		{
			array[j] = NULL;
			while (*str == c)
				str++;
			if (*str == '\0')
				return (array);
			array[j] = (char*)malloc(sizeof(char) * (sym(str, c) + 1));
			array[j] = ft_strcpy_split(array[j], str, c);
			while (*str != c)
				if (*str++ == '\0')
					return (array);
			j++;
		}
	}
	return (NULL);
}
