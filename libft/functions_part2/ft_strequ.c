/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 01:58:34 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:21:20 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = ft_strcmp((char*)s1, (char*)s2);
	if (i <= 0)
		return (1);
	else
		return (0);
}
