/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:22:11 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/10 16:56:51 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies len bytes from string src to string dst
*/

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len--)
			*((unsigned char*)dst + len) = *((unsigned char*)src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
