/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 20:27:25 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/14 20:32:33 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function locates the first occurrence of the null-terminated string s2
**	in the null-terminated string s1
*/

char		*ft_strcasestr(const char *s1, const char *s2)
{
	if (!*s1 || !*s2)
		return (!*s2 ? (char*)s1 : NULL);
	else if (!ft_strncasecmp(s1, s2, ft_strlen(s2)))
		return ((char*)s1);
	return (ft_strcasestr(++s1, s2));
}
