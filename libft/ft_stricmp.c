/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stricmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 08:21:58 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/10 11:51:40 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares lexicographically the null-terminated
**	strings s1 ans s2 without regards to case.
*/

int			ft_stricmp(const char *s1, const char *s2)
{
	if (!*s1 || ft_tolower(*s1) != ft_tolower(*s2))
		return (ft_tolower(*s1) - ft_tolower(*s2));
	return (ft_stricmp(++s1, ++s2));
}
