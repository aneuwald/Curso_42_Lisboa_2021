/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:49:43 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 16:21:47 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putwchar(wchar_t c, t_obj *obj)
{
	unsigned char	str[4];
	size_t			size;

	size = ft_wcharlen(c);
	if (size == 1)
		str[0] = ((c >> 0) & 0x7F) | 0x00;
	else if (size == 2)
	{
		str[0] = ((c >> 6) & 0x1F) | 0xC0;
		str[1] = ((c >> 0) & 0x3F) | 0x80;
	}
	else if (size == 3)
	{
		str[0] = ((c >> 12) & 0x0F) | 0xE0;
		str[1] = ((c >> 6) & 0x3F) | 0x80;
		str[2] = ((c >> 0) & 0x3F) | 0x80;
	}
	else if (size == 4)
	{
		str[0] = ((c >> 18) & 0x07) | 0xF0;
		str[1] = ((c >> 12) & 0x3F) | 0x80;
		str[2] = ((c >> 6) & 0x3F) | 0x80;
		str[3] = ((c >> 0) & 0x3F) | 0x80;
	}
	obj->wprint -= size;
	if (obj->wprint < 0)
		size = obj->wprint + 4;
	write(1, str, size);
	obj->printed += size;
}
