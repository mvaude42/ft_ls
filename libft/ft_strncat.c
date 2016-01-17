/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:21:12 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:51:08 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	function appends not more than n characters from s2
**	and then adds a terminating `\0'
*/

char			*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(s1);
	while (i < n && *s2)
		*(s1 + len + i++) = *s2++;
	*(s1 + len + i) = '\0';
	return (s1);
}
