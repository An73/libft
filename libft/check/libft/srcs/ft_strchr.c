/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 16:16:52 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/07 22:15:44 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int ch)
{
	char		*temp;

	temp = (char*)str;
	while (*temp /*!= '\0'*/)
	{
		if (*temp == ch)
			return (temp);
		temp++;
	}
	if (ch == '\0')
		return (temp);
	return (NULL);
}
