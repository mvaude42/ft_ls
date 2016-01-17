/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:26 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:36:22 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function copies the string src to ds (including '\0')
*/

char			*ft_strcpy(char *dst, const char *src)
{
	char		*tmp;

	tmp = dst;
	while (*src)
		*tmp++ = *src++;
	*(tmp) = *(src);
	return (dst);
}
