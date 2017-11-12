/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:27:13 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/28 20:34:06 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ran;
	int		index;
	int		leng;

	leng = 0;
	index = min;
	while (index < max)
	{
		index++;
		leng++;
	}
	if (leng > 0)
	{
		ran = (int*)malloc(sizeof(int) * leng);
		index = 0;
		while (min < max)
		{
			ran[index] = min;
			index++;
			min++;
		}
		return (ran);
	}
	return (0);
}
