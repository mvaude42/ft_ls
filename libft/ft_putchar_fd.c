/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:27:43 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:57:56 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes the character c to the output stream pointed by fd
*/

void		ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
