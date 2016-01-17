/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:51:07 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/14 20:15:33 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests for any printing character, including space (` ')
*/

int			ft_isprint(int c)
{
	return (ft_isgraph(c) || c == 32 ? 1 : 0);
}
