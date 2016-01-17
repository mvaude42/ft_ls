/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:52:35 by mvaude            #+#    #+#             */
/*   Updated: 2014/11/04 18:48:35 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Function converts a lower-case letter to the corresponding upper-case letter
*/

int			ft_toupper(int c)
{
	return (ft_islower(c) ? c - 32 : c);
}
