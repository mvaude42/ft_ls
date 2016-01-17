/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:25:07 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:27:53 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function creates a new string with the result of function applied
**	on each character of the string pointed by s
*/

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*copy;

	if (!(copy = (char*)malloc(ft_strlen(s))))
		return (NULL);
	str = copy;
	while (*s)
		*copy++ = f(*s++);
	*copy = '\0';
	return (str);
}
