/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:16:50 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:40:24 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Functions assigns '\0' to all characters
**	in the string pointed by s
*/

void		ft_strclr(char *s)
{
	while (*s && s)
		*s++ = '\0';
}
