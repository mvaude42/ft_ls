/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:12:16 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:42:13 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function compares lexicographically the null-terminated
**	strings s1 ans s2
*/

int			ft_strcmp(const char *s1, const char *s2)
{
	return (!*s1 || *s1 != *s2 ? *s1 - *s2 : ft_strcmp(++s1, ++s2));
}
