/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 20:50:20 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/06 18:26:48 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*fresh;

	len = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	fresh = (char*)malloc(len * sizeof(*fresh));
	if (!fresh)
		return (NULL);
	fresh = ft_strcat((char*)s1, s2);
	return (fresh);
}
