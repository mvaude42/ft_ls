/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 20:16:07 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/14 20:21:03 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares lexicographically the null-terminated
**	strings s1 ans s2
*/

int			ft_strcasecmp(const char *s1, const char *s2)
{
	if (!*s1 || ft_tolower(*s1) != ft_tolower(*s2))
		return (ft_tolower(*s1) - ft_tolower(*s2));
	return (ft_strcasecmp(++s1, ++s2));
}
