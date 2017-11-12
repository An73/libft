/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 19:20:12 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/10 13:23:11 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	int		i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
			write(1, &s[i++], 1);
		write(1, "\n", 1);
	}
}
