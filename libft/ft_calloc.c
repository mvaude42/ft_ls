/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 20:42:14 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/14 20:43:29 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function creates a str string initialized
*/

void			*ft_calloc(size_t count, size_t size)
{
	void		*str;

	if (!(str = malloc(count * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
