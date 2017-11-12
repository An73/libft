/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:39:47 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/09 22:47:55 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	unsigned int		num;
	char	*str;

	i = 0;
	num = (unsigned int)n;
	if (n < 0)
	{
		num = n * -1;
		i = 1;
	}
	if (num == 0)
	{
		str = (char*)malloc(2);
		str = "0";
		return (str);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	str = (char*)malloc(i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[0] = '-';
	str[i--] = '\0';
	while (num)
	{
		str[i--] = 48 + (num % 10);
		num = num / 10;
	}
	return (str);
}
