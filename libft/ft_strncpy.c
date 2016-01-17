/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:17:39 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:53:30 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies at most n characters from src into dst
**	If src is less than n characters long, the remainder of dst
**	is filled with `\0' characters
**	Otherwise, dst is not terminated
*/

char			*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
		*(dst + i) = (*src ? *src++ : '\0');
	return (dst);
}
