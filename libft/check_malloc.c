/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_malloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 22:26:22 by mvaude            #+#    #+#             */
/*   Updated: 2015/04/21 22:26:34 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*check_malloc(size_t len)
{
	void	*str;

	if (!(str = malloc(len)) || len == 0)
	{
		ft_putendl_fd("Mallor error", 2);
		exit(EXIT_FAILURE);
	}
	return (str);
}
