/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 20:22:01 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/14 20:31:59 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares lexicographically the null-terminated
**	strings s1 ans s2
**	The function compares not more than n characters
*/

int			ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	else if (!*s1 || ft_tolower(*s1) != ft_tolower(*s2))
		return (ft_tolower(*s1) - ft_tolower(*s2));
	return (ft_strncasecmp(++s1, ++s2, --n));
}
