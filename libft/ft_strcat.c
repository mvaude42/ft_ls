/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:13:42 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:06:57 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function appends a copy of the null-terminated string s2
**	to the end of the null-terminated string s1,
**	then add a terminating '\0'
*/

char		*ft_strcat(char *s1, char *s2)
{
	ft_strcpy(s1 + ft_strlen(s1), s2);
	return (s1);
}
