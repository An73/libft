/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 21:31:11 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/28 21:55:38 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	int		index;

	index = 0;
	str = malloc(size + 1);
	while (index < size)
	{
		str[index] = '\0';
		index++;
	}
	str[index] = '\0';
	return (str);
}
