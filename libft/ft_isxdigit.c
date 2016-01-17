/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:07:12 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:37:52 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests for any hexadecimal-digit character
*/

int			ft_isxdigit(int c)
{
	if (ft_isdigit(c) || (ft_tolower(c) >= 97 && ft_tolower(c) <= 102))
		return (1);
	return (0);
}
