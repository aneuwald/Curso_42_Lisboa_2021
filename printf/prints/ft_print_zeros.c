/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_zeros.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 11:56:36 by aneuwald          #+#    #+#             */
/*   Updated: 2021/03/19 19:19:17 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int get_zeros_str(t_obj *obj)
{

	int zeros_str;

	zeros_str = 0;
	if (obj->zero && !obj->minus)
			zeros_str = obj->width - obj->size;
	return (zeros_str);
}

static int get_zeros_num(t_obj *obj)
{

	int zeros_num;

		if (obj->zero && !obj->dot)
		{
			zeros_num = obj->width - obj->size;
			if (obj->neg)
				zeros_num--;
		}
		else
			zeros_num = obj->precision - obj->size;
	return (zeros_num);
}

void ft_print_zeros(t_obj *obj)
{
	int zeros;

	if (obj->conv == 's' || obj->conv == 'c')
		zeros = get_zeros_str(obj);
	else
		zeros = get_zeros_num(obj);
	while (zeros-- > 0)
		ft_putchar('0', obj);
}
