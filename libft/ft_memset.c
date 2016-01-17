/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:13:28 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 22:07:06 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes len bytes of value
**	c (converted to an unsigned char) to the string b
*/

void		*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*((unsigned char*)b + len) = c;
	return (b);
}
