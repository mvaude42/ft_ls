/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:20:22 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 19:06:13 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function reverses the string pointed by str
*/

char			*ft_strrev(char *str)
{
	size_t		size;
	size_t		start;

	start = 0;
	size = ft_strlen(str);
	while (start < size)
		ft_swap(str + start++, str + --size);
	return (str);
}
