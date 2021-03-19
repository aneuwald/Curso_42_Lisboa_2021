/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneuwald <aneuwald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:01:19 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 12:11:45 by aneuwald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_c(t_obj *obj)
{
	char c;
	
	c = (char) va_arg(obj->vargs, int);
	obj->size = 1;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putchar(c, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}