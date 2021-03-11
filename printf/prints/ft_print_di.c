/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/11 18:38:37 by acanterg         ###   ########.fr       */
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
	int num_size;

	d = va_arg(obj->vargs, int);
	num_size = get_size(d);
	size = num_size;
	if (obj->dot && obj->precision > size)
		size = obj->precision;
	if (obj->width > size && obj->minus == 0)
		ft_print_extra(obj, obj->width - size);
	while(size - ++num_size > 0)
		ft_putchar('0',obj);
	if (!(obj->precision == 0 && d == 0))
		ft_putnbr(d, obj);
	if (obj->width > size && obj->minus == 1)
		ft_print_extra(obj, obj->width - size);
}
