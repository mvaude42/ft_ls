/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:11:08 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/15 17:39:59 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function returns a pointer to a fresh string
*/

char		*ft_strnew(size_t size)
{
	char	*str;

	return (!(str = (char*)ft_memalloc(size + 1)) ? NULL : str);
}
