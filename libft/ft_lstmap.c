/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:46:09 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/11 18:10:37 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;

	if (!f || !lst)
		return (NULL);
	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	new = (*f)(lst);
	if (new)
		new->next = ft_lstmap(lst->next, f);
	return (new);
}
