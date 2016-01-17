/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isgraph.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:05:56 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:34:26 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	function tests for any printing character except space (` ')
**	and other locale-specific space-like characters
*/

int			ft_isgraph(int c)
{
	return (c >= 33 && c <= 126);
}
