/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkotenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 20:41:57 by dkotenko          #+#    #+#             */
/*   Updated: 2017/11/11 20:41:59 by dkotenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst = NULL;

	while (lst)
	{
		new_lst = (t_list*)malloc(sizeof(t_list));
		new_lst = f(lst);
		lst = lst->next;
		new_lst = new_lst->next;
		new_lst->next = NULL;
	}
	return (new_lst);
}