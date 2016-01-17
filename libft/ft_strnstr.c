/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:46:36 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:36:57 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates the first occurrence of the null-terminated string s2
**	in the string s1, where not more than n characters are searched
*/

char				*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	const char		*s1c;
	const char		*s2c;

	s1c = s1;
	if (!*s2)
		return ((char*)s1);
	s2c = s2;
	while (*s1c && *s2c && n--)
	{
		if (*s1c++ != *s2c++)
		{
			s1c = ++s1;
			s2c = s2;
		}
	}
	return (!*s2c ? (char*)s1 : NULL);
}
