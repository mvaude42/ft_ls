/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 20:46:50 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:44:29 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function return a fresh string extracted from
**	the string pointed by s
*/

char			*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char		*str;
	unsigned	i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))) || !*s)
		return (NULL);
	while (len--)
		*(str + i++) = *(s + start++);
	*(str + i) = '\0';
	return (str);
}
