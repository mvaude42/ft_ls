/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:18:21 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:04:35 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_realloc(void *ptr, size_t size)
{
	void		*str;

	str = ft_memalloc(size);
	if (ptr)
	{
		if (str)
			ft_memcpy(str, ptr, size);
		ft_memdel(&ptr);
	}
	return (str);
}
