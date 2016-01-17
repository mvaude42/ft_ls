/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcstombs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 22:27:14 by mvaude            #+#    #+#             */
/*   Updated: 2015/04/21 22:27:15 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wcstombs(char *str, wchar_t *wstr, int n)
{
	int	i;

	i = (*wstr || wstr ? ft_itoa_wchar(str, *wstr) : 0);
	return (n - i <= 0 ? 0 : i + ft_wcstombs(str + i, ++wstr, n - i));
}
