/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:33:23 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:50:29 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function counts the number of words
**	in the string pointed by s
*/

size_t			ft_wordcount(char *s, char c)
{
	size_t		nb;

	while (*s && *s == c)
		s++;
	nb = (*s ? 1 : 0);
	while (*s)
	{
		if (*s == c && *(s + 1) && *(s + 1) != c)
			nb++;
		s++;
	}
	return (nb);
}
