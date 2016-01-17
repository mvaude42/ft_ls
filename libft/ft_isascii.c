/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:43:28 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:30:41 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests for an ASCII character, which is any character
**	between 0 and octal 0177 inclusive
*/

int			ft_isascii(int c)
{
	return (c >= 0 && c <= 127 ? 1 : 0);
}
