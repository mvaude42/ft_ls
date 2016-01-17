/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:58:33 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:37:43 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function is identical to ft_strchr()
**	except it locates the last occurrence of c
*/

char			*ft_strrchr(const char *s, int c)
{
	char		*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char*)s;
		s++;
	}
	return ((char)c == '\0' ? (char*)s : last);
}
