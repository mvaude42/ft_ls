/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_wchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvaude <mvaude@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 19:19:38 by mvaude            #+#    #+#             */
/*   Updated: 2015/03/26 19:28:30 by mvaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_itoa_wchar(char *str, wchar_t wc)
{
	if (wc < 0x80)
		return (*str = ((wc & 0x7F) | 0), 1);
	else if (wc < 0x800)
	{
		*(str++) = ((wc >> 6) & 0x1F) | 0xC0;
		*(str++) = ((wc >> 0) & 0x3F) | 0x80;
		return (2);
	}
	else if (wc < 0x10000)
	{
		*(str++) = ((wc >> 12) & 0xF) | 0xE0;
		*(str++) = ((wc >> 6) & 0x3F) | 0x80;
		*(str++) = ((wc >> 0) & 0x3F) | 0x80;
		return (3);
	}
	else if (wc < 0x110000)
	{
		*(str++) = ((wc >> 18) & 0x7) | 0xF0;
		*(str++) = ((wc >> 12) & 0x3F) | 0x80;
		*(str++) = ((wc >> 6) & 0x3F) | 0x80;
		*(str++) = ((wc >> 0) & 0x3F) | 0x80;
		return (4);
	}
	return (0);
}
