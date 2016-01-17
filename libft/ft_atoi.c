/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:59:15 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/11 15:34:43 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function converts the initial portion of the string
** pointed to by str to int representation
*/

int			ft_atoi(char *str)
{
	int		sign;
	int		n;

	n = 0;
	sign = 1;
	while (*str && (!ft_isprint(*str) || ft_isspace(*str)))
		str++;
	if (ft_issign(*str) && ft_isdigit(*(str + 1)))
		sign = (*str++ == '-' ? -1 : 1);
	while (ft_isdigit(*str))
	{
		n *= 10;
		n += (*str++ - 48);
	}
	return (n * sign);
}
