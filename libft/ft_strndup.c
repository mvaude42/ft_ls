/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:02:00 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/24 18:00:36 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function allocates sufficient memory for a copy of the string s1,
**	does the copy, and returns a pointer to it
*/

char		*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	char	*tmp;

	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) + 1))))
		return (NULL);
	tmp = s2;
	while (*s1 && n)
	{
		*tmp++ = *s1++;
		n--;
	}
	*tmp = '\0';
	return (s2);
}
