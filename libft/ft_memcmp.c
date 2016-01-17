/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:05:54 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:31:54 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares byte string s1 against byte string s2
*/

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n || !s1 || !s2)
		return (0);
	else if (*(unsigned char*)s1 != *(unsigned char*)s2)
		return (*(unsigned char*)s1 - *(unsigned char*)s2);
	return (ft_memcmp(++s1, ++s2, --n));
}
