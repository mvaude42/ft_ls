/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:24:47 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:57:54 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function writes the integer n
**	to the output stream of stdout
*/

void		ft_putnbr(int n)
{
	int		size;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = ft_abs(n);
	}
	size = ft_pow(10, ft_intlen(n) - 1);
	while (size > 0)
	{
		ft_putchar('0' + (n / size));
		n %= size;
		size /= 10;
	}
}
