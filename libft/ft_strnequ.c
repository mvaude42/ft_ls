/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:32:04 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:35:16 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests lexicographically at most n charachers
**	from the strings s1 and s2
*/

int			ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if ((!*s1 && !*s2) || n == 0)
		return (1);
	return (*s1 != *s2 ? 0 : ft_strnequ(++s1, ++s2, --n));
}
