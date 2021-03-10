/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/08 17:58:29 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(int n)
{
	int len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while(n > 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}

void		ft_print_di(t_obj *obj)
{
	int d;
	int size;

	d = va_arg(obj->vargs, int);
	size = get_size(d);
	if (obj->width > size && obj->minus == 0)
		ft_print_extra(obj, obj->width - size);
	ft_putnbr(d, obj);
	if (obj->width > size && obj->minus == 1)
		ft_print_extra(obj, obj->width - size);
	
}
