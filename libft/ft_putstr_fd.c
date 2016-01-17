/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:29:27 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:02:18 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes the string pointed by s
**	to the output stream pointed by fd
*/

void		ft_putstr_fd(const char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
