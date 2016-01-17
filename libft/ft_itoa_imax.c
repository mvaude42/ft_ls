/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_imax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:11:53 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:40:56 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function converts an integer to a string pointed by the return value
*/

static void		ft_intrev(intmax_t n, char *str)
{
	if (n <= 0)
		return ;
	*str = n % 10 + 48;
	ft_intrev(n / 10, str - 1);
}

char			*ft_itoa_imax(intmax_t n)
{
	char		*str;
	size_t		size;

	if (n < -9223372036854775807)
		return (ft_strdup("-9223372036854775808"));
	size = ft_intlen(n);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (!n)
		str = ft_strdup("0");
	if (n < 0)
	{
		*str = '-';
		ft_intrev(-1 * n, str + size - 1);
	}
	else
		ft_intrev(n, str + size - 1);
	*(str + size) = '\0';
	return (str);
}
