/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:33:02 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:59:35 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes the integer n
**	to the output stream pointed by fd
*/

void		ft_putnbr_fd(int n, int fd)
{
	int		size;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = ft_abs(n);
	}
	size = ft_pow(10, ft_intlen(n) - 1);
	while (size > 0)
	{
		ft_putchar_fd('0' + (n / size), fd);
		n %= size;
		size /= 10;
	}
}
