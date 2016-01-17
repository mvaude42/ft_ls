/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 21:18:25 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:46:38 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function returns the string pointed by s
**	without blanks in the beginning and
**	the end of the string
*/

char				*ft_strtrim(const char *s)
{
	unsigned int	i;
	char			*str;

	while (ft_isspace(*s))
		s++;
	if (!*s)
		return (ft_strnew(1));
	i = 0;
	while (s[i])
		i++;
	i--;
	while (ft_isspace(s[i]))
		i--;
	if (!(str = (char*)malloc(i + 2)))
		return (NULL);
	str = ft_strncpy(str, s, i + 1);
	*(str + i + 1) = '\0';
	return (str);
}
