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

void	ft_print_x(t_obj *obj)
{
	int x;

	x = va_arg(obj->vargs, int);
	if (obj->str[obj->index] == 'x')
		ft_putnbr_base(x, "0123456789abcdef" ,obj);
	else if (obj->str[obj->index] == 'X')
		ft_putnbr_base(x, "0123456789ABCDEF" ,obj);
}
