/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:03:13 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:08:14 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function returns zero if the character tests false
**	and returns non-zero if the character tests true
*/

int			ft_iscntrl(int c)
{
	return ((c >= 0 && c <= 3) || c <= 127 ? 1 : 0);
}
