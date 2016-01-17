/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:06:21 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:25:49 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function creates a new string initialized
*/

void			*ft_memalloc(size_t size)
{
	void		*new;

	if (!(new = malloc(size)) || !size)
		return (NULL);
	ft_bzero(new, size);
	return (new);
}
