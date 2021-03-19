/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:22:42 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/10 10:22:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int get_spaces_str(t_obj *obj)
{

	int spaces_str;

	spaces_str = 0;
	if (obj->zero && !obj->minus)
		return (0);
	if (obj->precision && obj->precision < obj->size)
		spaces_str = obj->width - obj->precision;
	else
		spaces_str = obj->width - obj->size;
	return (spaces_str);
}

static int get_spaces_num(t_obj *obj)
{

	int spaces_num;

	spaces_num = 0;
	if (obj->size < obj->precision)
		spaces_num = obj->width - obj->precision;
	else
		spaces_num = obj->width - obj->size;
	if (obj->neg)
		spaces_num--;
	if (obj->zero && !obj->dot)
		spaces_num -= obj->width - obj->size;
	return (spaces_num);
}

void ft_print_spaces(t_obj *obj)
{
	int spaces;

	if (obj->conv == 's' || obj->conv == 'c')
		spaces = get_spaces_str(obj);
	else
		spaces = get_spaces_num(obj);
	while (spaces-- > 0)
		ft_putchar(' ', obj);
}
