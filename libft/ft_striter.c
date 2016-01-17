/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:18:56 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:22:59 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function applies a function on each character
**	of the string pointed by s
*/

void		ft_striter(char *s, void (*f)(char*))
{
	while (*s)
		f(s++);
}
