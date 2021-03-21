/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:14:00 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int		get_size(uint64_t n)
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

static intmax_t	parse_di(t_obj *obj)
{
	if (obj->l == 1)
		return (va_arg(obj->vargs, long));
	if (obj->l == 2)
		return (va_arg(obj->vargs, long long));
	if (obj->h == 1)
		return ((short) va_arg(obj->vargs, int));
	if (obj->h == 2)
		return ((char) va_arg(obj->vargs, int));
	return (va_arg(obj->vargs, int));
}

void			ft_print_di(t_obj *obj)
{
	intmax_t		temp;
	uintmax_t		d;

	temp = parse_di(obj);
	if (temp < 0)
	{
		d = (uintmax_t) -temp;
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
	else 
	{
		if (obj->plus)
			ft_putchar('+', obj);
		if (obj->space)
			ft_putchar(' ', obj);
	}
	ft_print_zeros(obj);
	if (obj->size)
		ft_putnbr(d, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}
