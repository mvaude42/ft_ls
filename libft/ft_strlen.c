/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:45:35 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:26:44 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function computes the length of the string s
*/

size_t			ft_strlen(const char *s)
{
	return (!*s ? 0 : 1 + ft_strlen(++s));
}
