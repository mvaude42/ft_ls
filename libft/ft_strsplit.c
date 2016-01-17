/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:36:28 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:39:02 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function splits a string by words
*/

char			**ft_strsplit(const char *s, char c)
{
	size_t		wordcount;
	char		*start;
	char		**str;

	wordcount = ft_wordcount((char*)s, c);
	if (!(str = (char**)malloc(sizeof(char*) * (wordcount + 1))))
		return (NULL);
	start = (char*)s;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				*(str++) = ft_strsub(start, 0, s - start);
			start = (char*)s + 1;
		}
		s++;
	}
	if (start != s)
		*(str++) = ft_strsub(start, 0, s - start);
	*str = NULL;
	return (str - wordcount);
}
