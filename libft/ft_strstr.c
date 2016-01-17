/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:07:57 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:39:55 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates the first occurrence of the null-terminated string s2
**	in the null-terminated string s1
*/

char		*ft_strstr(const char *s, const char *d)
{
	if (!*s || !*d)
		return (!*d ? (char*)s : NULL);
	return (!ft_strncmp(s, d, ft_strlen(d)) ? (char*)s : ft_strstr(++s, d));
}
