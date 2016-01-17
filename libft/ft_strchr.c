/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:51:01 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:07:43 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates the first occurrence of c (converted to a char)
**	in the string pointed to by s
*/

char		*ft_strchr(const char *s, int c)
{
	if (!*s)
		return ((char)c == '\0' ? (char*)s : NULL);
	return (*s == (char)c ? (char*)s : ft_strchr(s + 1, c));
}
