/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:38:27 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:26:16 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies and concatenate strings respectively of size size
*/

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len;
	size_t		i;

	i = 0;
	len = ft_strlen(dst);
	if (len >= size)
		return (ft_strlen(src) + size);
	while (src[i] && (i < size - len - 1))
	{
		*(dst + len + i) = *(src + i);
		i++;
	}
	*(dst + len + i) = '\0';
	return (ft_strlen(src) + len);
}
