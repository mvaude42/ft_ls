/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:55:15 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:53:05 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function converts an upper-case letter
**	to the corresponding lower-case letter
*/

int			ft_tolower(int c)
{
	return (ft_isupper(c) ? c + 32 : c);
}
