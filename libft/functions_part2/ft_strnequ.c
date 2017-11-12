/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 14:21:38 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 15:10:56 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(char *s1, char *s2, size_t n);

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		i;

	i = ft_strncmp((char*)s1, (char*)s2, n);
	if (i <= 0)
		return (1);
	else
		return (0);
}
