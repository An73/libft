/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:09:54 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/08 14:37:37 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		index_b;
	size_t		index_l;
	char		*string;
	char		*s_big;

	s_big = (char*)big;
	index_b = 0;
	index_l = 0;
	while (s_big[index_b] != '\0')
	{
		if (index_b > len)
			return (0);
		while (s_big[index_b++] == little[index_l])
		{
			index_l++;
			string = &s_big[index_b - index_l];
			if (little[index_l] == '\0')
				return (string);
		}
		index_l = 0;
	}
	if (*little == '\0')
		return ((char*)big);
	return (0);
}
