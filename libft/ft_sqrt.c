/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 23:07:31 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/10 11:50:49 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double			ft_sqrt(double nb)
{
	double		x;
	double		res;

	x = 1;
	if (nb <= 0)
		return (0);
	while (x < nb)
	{
		res = x;
		res *= x;
		if (res == nb)
			return (x);
		else if (res > nb)
			return (0);
		x++;
	}
	return (nb);
}
