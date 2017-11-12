/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:45:23 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/06 18:29:24 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char		**armem(char **array, char const *s, char c)
{
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen((char*)s);
	array = (char**)malloc(len * sizeof(char*));
	if (!array)
		return (NULL);
	if (array != NULL)
	{
		while (s[i] != '\0')
		{
			while (s[i] == c)
				i++;
			len = 0;
			while (s[i] != c && s[i++] != '\0')
				len++;
			array[j++] = (char*)malloc(sizeof(char) * (len + 1));
		}
	}
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		index;
	int		j;

	j = 0;
	i = 0;
	array = armem(array, s, c);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0')
			i++;
		index = 0;
		while (s[i] != c && s[i] != '\0')
			array[j][index++] = s[i++];
		array[j][index] = '\0';
		j++;
		i++;
	}
	return (array);
	free(array);
}
