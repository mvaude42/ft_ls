/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:40:31 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:24:43 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function writes n zeroed bytes to the string s
*/

void		ft_bzero(void *s, size_t n)
{
	while (n)
		*((char*)s + --n) = 0;
}
