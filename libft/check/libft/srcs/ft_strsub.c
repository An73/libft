/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:12:24 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/13 15:54:02 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;

	new_str = ft_strnew(len);
	if (new_str == NULL)
		return (NULL);
	s = s + start;
	index = 0;
	while (index < len)
	{
		new_str[index] = s[index];
		index++;
	}
	return (new_str);
}
