//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 13:20:43 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 01:13:27 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		index1;
	int		index2;
	int		s;

	index1 = 0;
	index2 = 0;
	while (s1[index1] == s2[index2])
	{
		index1++;
		index2++;
		if (s1[index1] == '\0' && s2[index2] == '\0')
			return (0);
	}
	s = s1[index1] - s2[index2];
	return (s);
}
