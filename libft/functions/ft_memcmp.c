/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 22:31:05 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:37:59 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = ((unsigned char*)s1);
	str2 = ((unsigned char*)s2);
	i = 0;
	while (i++ < n)
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}