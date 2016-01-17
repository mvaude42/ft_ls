/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:18:23 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:26:08 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function computes the length of the string s
*/

size_t			ft_intlen(long long n)
{
	size_t		nb;

	if (!n)
		return (1);
	nb = 0;
	if (n < 0)
		nb++;
	while (n)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}
