/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:51:04 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(uintmax_t n)
{
	int len;

	len = 0;
	while(n > 0)
	{
		len++;
		n /= 16;
	}

	return (len);
}

static uintmax_t	parse_x(t_obj *obj)
{
	if (obj->l == 1)
		return (va_arg(obj->vargs, unsigned long));
	if (obj->l == 2)
		return (va_arg(obj->vargs, unsigned long long));
	if (obj->h == 1)
		return ((unsigned short) va_arg(obj->vargs, unsigned int));
	if (obj->h == 2)
		return ((unsigned char) va_arg(obj->vargs, unsigned int));
	return (va_arg(obj->vargs, unsigned int));
}

void	ft_print_x(t_obj *obj)
{

	uintmax_t	x;

	x = parse_x(obj);
	obj->size = get_size(x);
	if (x == 0 && obj->dot && !obj->precision)
		obj->size = 0;
	else if (x == 0)
		obj->size = 1;
	if (obj->hash && obj->size && x != 0)
		obj->size += 2;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	if (obj->hash && obj->size && x != 0)
		ft_putstr(obj->conv == 'x' ? "0x": "0X", obj);
	if (obj->hash && obj->size && x != 0 && obj->dot)
		obj->size -= 2;
	ft_print_zeros(obj);
	if (obj->size)
	{
		if (obj->conv == 'x')
			ft_putnbr_base(x, "0123456789abcdef" ,obj);
		else
			ft_putnbr_base(x, "0123456789ABCDEF" ,obj);
	}
	if (obj->hash && obj->size && x != 0 && obj->dot)
		obj->size += 2;
	if (obj->minus == 1)
		ft_print_spaces(obj);








}
