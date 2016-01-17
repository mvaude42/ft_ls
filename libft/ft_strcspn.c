/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 08:31:29 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/05 08:38:22 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function spans the initial part of the null-terminated string s1,
**	as long as the characters from s1 occur in the null-terminated string s2
*/

size_t		ft_strcspn(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		if (*s1 == s2[i++])
			return (*s1 ? 0 : ft_strcspn(s1 + 1, s2));
	}
	return (!*s1 ? 0 : 1 + ft_strcspn(s1 + 1, s2));
}
