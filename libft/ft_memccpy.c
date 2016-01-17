/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:10:27 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:43:36 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies bytes from string src to string dst
*/

void			*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	if (!n)
		return (NULL);
	*((unsigned char*)d) = *((unsigned char*)s);
	return (*(char*)s == c ? (char*)d + 1 : ft_memccpy(d + 1, s + 1, c, n - 1));
}
