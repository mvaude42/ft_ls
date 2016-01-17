/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:58:00 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:30:29 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates the first occurrence of
**	c (converted to an unsigned char) in string s
*/

void		*ft_memchr(const void *s, int c, size_t n)
{
	if (!n || !s)
		return (NULL);
	else if (*((unsigned char*)s) == (unsigned char)c)
		return ((void*)s);
	return (ft_memchr(s + 1, c, n - 1));
}
