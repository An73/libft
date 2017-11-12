/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 21:25:12 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:30:04 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	int		index1;
	int		index2;
	int		s;

	index1 = 0;
	index2 = 0;
	while (s1[index1] == s2[index2] && index1 < (int)n)
	{
		index1++;
		index2++;
		if (s1[index1] == '\0' && s2[index2] == '\0')
			return (0);
	}
	s = s1[index1] - s2[index2];
	return (s);
}
