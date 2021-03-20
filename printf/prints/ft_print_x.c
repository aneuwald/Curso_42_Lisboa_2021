/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 19:19:46 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(int64_t n)
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

void	ft_print_x(t_obj *obj)
{

	unsigned int	x;

	x = va_arg(obj->vargs, unsigned int);
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
