/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 16:06:39 by aneuwald         ###   ########.fr       */
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

void	ft_print_u(t_obj *obj)
{
	unsigned int	u;

	u = va_arg(obj->vargs, unsigned int);
	obj->size = get_size(u);
	if (u == 0 && obj->dot && !obj->precision)
		obj->size = 0;
	else if (u == 0)
		obj->size = 1;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_print_zeros(obj);
	if (obj->size)
		ft_putnbr(u, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);

}
