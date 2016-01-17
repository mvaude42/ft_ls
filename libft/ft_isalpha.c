/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:37:44 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 17:29:40 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function tests for any character for which isupper(3) or islower(3) is true
*/

int			ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c) ? 1 : 0);
}
