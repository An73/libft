/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:16:52 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:49:56 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	char		*temp;

	temp = (char*)str;
	while (*temp != '\0')
	{
		if (*temp != ch)
			temp++;
		else
			return (temp);
	}
	return (NULL);
}
