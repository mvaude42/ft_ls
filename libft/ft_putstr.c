/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:20:06 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:00:37 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes the string pointed by s
**	to the output stream of stdout
*/

void		ft_putstr(const char *s)
{
	write(1, s, ft_strlen(s));
}
