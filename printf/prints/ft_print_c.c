/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:01:19 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/10 17:11:03 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_obj *obj)
{
	char c;
	
	c = (char) va_arg(obj->vargs, int);
	if (obj->width > 1 && obj->minus == 0)
		ft_print_extra(obj, obj->width - 1);
	ft_putchar(c, obj);
	if (obj->width > 1 && obj->minus == 1)
		ft_print_extra(obj, obj->width - 1);
}