/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:30:15 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:21:58 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests lexicographically the strings s1 and s2
*/

int			ft_strequ(const char *s1, const char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	return (*s1 != *s2 ? 0 : ft_strequ(++s1, ++s2));
}
