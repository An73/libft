/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 15:22:54 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:49:12 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t		index;
	size_t		j;
	size_t		num;

	index = 0;
	j = 0;
	while (s1[index] != '\0')
		index++;
	num = index;
	while (s2[j] != '\0' && index + 1 < n)
	{
		s1[index] = s2[j];
		index++;
		j++;
	}
	s1[index] = '\0';
	j = 0;
	while (s2[j] != '\0')
		j++;
	num = num + j;
	return (num);
}
