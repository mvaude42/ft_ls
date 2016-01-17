/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:39:07 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/05 08:51:55 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates in the null-terminated string s1 the first occurrence
**	of any character in the string s2, returning a pointer to this character.
**	If no characters from s2 occur anywhere in s1,
**	strpbrk() returns NULL
*/

char		*ft_strpbrk(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*(s2 + i))
	{
		if (*s1 == *(s2 + i++))
			return ((char*)s1);
	}
	return (!(*s1) ? NULL : ft_strpbrk(s1 + 1, s2));
}
