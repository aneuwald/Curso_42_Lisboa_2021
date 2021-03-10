/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/08 18:06:11 by acanterg         ###   ########.fr       */
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
	int64_t x;
	int size;

	x = va_arg(obj->vargs, int64_t);
	size = get_size(x);
	if (obj->width > size && obj->minus == 0)
		ft_print_extra(obj, obj->width - size);
	if (obj->str[obj->index] == 'x')
		ft_putnbr_base(x, "0123456789abcdef" ,obj);
	else if (obj->str[obj->index] == 'X')
		ft_putnbr_base(x, "0123456789ABCDEF" ,obj);
	if (obj->width > size && obj->minus == 1)
		ft_print_extra(obj, obj->width - size);








}
