/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:54:56 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/11 15:01:32 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies n bytes from memory area src to memory area dst
*/

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		*((char*)dst + i) = *((char*)src + i);
	return (dst);
}
