/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:16:19 by dkotenko          #+#    #+#             */
/*   Updated: 2017/10/29 14:40:35 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		index;
	char	*line;

	index = 0;
	while (src[index] != '\0')
		index++;
	line = (char*)malloc(sizeof(char) * index);
	index = 0;
	while (src[index] != '\0')
	{
		line[index] = src[index];
		index++;
	}
	line[index] = '\0';
	return (line);
}
