/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:18:52 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:31:55 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares lexicographically the null-terminated
**	strings s1 ans s2
**	The function compares not more than n characters
*/

int			ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	return (!*s1 || *s1 != *s2 ? *s1 - *s2 : ft_strncmp(s1 + 1, s2 + 1, n - 1));
}
