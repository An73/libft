/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:12:24 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/08 19:21:02 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	index;
	unsigned int	ifr;
	char			*fresh;

	ifr = 0;
	index = 0;
	if (s != NULL)
	{
		while (index < (unsigned int)len)
			index++;
		fresh = (char *)malloc(index * sizeof(*fresh) + 1);
		if (!fresh)
			return (NULL);
		index = start;
		while (s[index] != '\0' && (ifr < (unsigned int)len))
		{
			fresh[ifr] = s[index];
			ifr++;
			index++;
		}
		fresh[ifr] = '\0';
		return (fresh);
	}
	return (NULL);
}
