/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:20:22 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/05 08:38:04 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function spans the initial part of the null-terminated string s1,
**	as long as the characters from s1 occur in the null-terminated string s2
*/

size_t		ft_strspn(const char *s1, const char *s2)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s2[i])
	{
		if (*s1 == s2[i++])
			len++;
	}
	return (!*s1 ? 0 : len + ft_strspn(s1 + 1, s2));
}
