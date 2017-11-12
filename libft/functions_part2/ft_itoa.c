/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:39:47 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/30 18:46:45 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	int		i;
	int		num;
	char	*str;

	i = 0;
	num = n;
	if (n < 0)
	{
		num = n * -1;
		i = 1;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	str = (char*)malloc((i + 1) * sizeof(char));
	str[0] = '-';
	str[i--] = '\0';
	while (num)
	{
		str[i--] = 48 + (num % 10);
		num = num / 10;
	}
	return (str);
}
