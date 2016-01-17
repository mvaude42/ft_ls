/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:21:29 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:04:42 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function write the string pointed by s
**	to the output stream of stdout with a line return
*/

void		ft_putendl(const char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
