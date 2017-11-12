/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 13:33:45 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:41:48 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		index;
	unsigned int		a;

	index = 0;
	if (n == 0)
		return (dest);
	while (src[index + 1] <= n || dest[index - 1] == '\0')
	{
		a = src[index];
		dest[index] = a;
		index++;
	}
	return (dest);
}
