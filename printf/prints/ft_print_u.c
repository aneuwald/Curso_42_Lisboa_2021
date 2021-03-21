/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:50:46 by acanterg         ###   ########.fr       */
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
		n /= 10;
	}

	return (len);
}

static uintmax_t	parse_u(t_obj *obj)
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

void	ft_print_u(t_obj *obj)
{
	uintmax_t	u;

	u = parse_u(obj);
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
