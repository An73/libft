/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 21:27:44 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/06 18:28:03 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*fresh;
	int		len;
	int		index;
	int		ifr;

	ifr = 0;
	index = 0;
	len = ft_strlen((char*)s);
	fresh = (char*)malloc(len * sizeof(fresh) + 1);
	if (!fresh)
		return (NULL);
	while (s[index] == ' ' || s[index] == '\n' || s[index] == '\t')
		index++;
	len--;
	while (s[len] == ' ' || s[len] == '\n' || s[len] == '\t')
		len--;
	while (s[index] != '\0' && index < len)
	{
		fresh[ifr] = s[index];
		ifr++;
		index++;
	}
	fresh[ifr] = '\0';
	return (fresh);
}
