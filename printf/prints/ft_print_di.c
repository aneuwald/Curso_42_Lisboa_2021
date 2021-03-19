/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 13:26:25 by aneuwald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int n)
{
	int len;

	len = 0;
	while(n > 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}

void		ft_print_di(t_obj *obj)
{
	int				temp;
	unsigned int	d;

	temp = va_arg(obj->vargs, int);
	if (temp < 0)
	{
		d = (unsigned int) -temp;
		obj->neg = 1; 
	}
	else
		d = temp;
	obj->size = get_size(d);
	if (d == 0 && obj->dot && !obj->precision)
		obj->size = 0;
	else if (d == 0)
		obj->size = 1;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	if (obj->neg)
		ft_putchar('-', obj);
	ft_print_zeros(obj);
	if (obj->size)
		ft_putnbr(d, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}
