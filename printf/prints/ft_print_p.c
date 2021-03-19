/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 18:25:56 by aneuwald         ###   ########.fr       */
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

void	ft_print_nil(t_obj *obj)
{
	char	*s;

	s = "(nil)";
	obj->size = 5;
	if (obj->dot && obj->precision < obj->size)
		obj->size = obj->precision;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putstr(s, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}

void	ft_print_p(t_obj *obj)
{

	unsigned long	p;

	p = va_arg(obj->vargs, unsigned long);
	if (p == 0)
	{
		ft_print_nil(obj);
		return ;
	}
	obj->size = get_size(p) + 2;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putstr("0x", obj);
	ft_putnbr_base(p, "0123456789abcdef" ,obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}
