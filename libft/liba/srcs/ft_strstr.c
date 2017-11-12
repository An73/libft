/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/27 18:17:56 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:51:01 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	int		index_b;
	int		index_l;
	char	*string;
	char	*s_big;

	s_big = (char*)big;
	index_b = 0;
	index_l = 0;
	while (s_big[index_b] != '\0')
	{
		while (s_big[index_b] == little[index_l])
		{
			index_b++;
			index_l++;
			string = &s_big[index_b - index_l];
			if (little[index_l] == '\0')
				return (string);
		}
		index_b++;
		index_l = 0;
	}
	return (0);
}
