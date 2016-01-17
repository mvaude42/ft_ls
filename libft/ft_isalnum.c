/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:41:46 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:28:14 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function tests for any character for which isalpha(3) or isdigit(3) is true
*/

int			ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c) ? 1 : 0);
}
