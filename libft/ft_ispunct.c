/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:16:34 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:36:02 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	unction tests for any printing character, except for space (` ')
**	or a character for which isalnum(3) is true
*/

int			ft_ispunct(int c)
{
	if ((c >= 33 && c <= 47) || (c >= 58 && c <= 64)
			|| (c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (1);
	return (0);
}
