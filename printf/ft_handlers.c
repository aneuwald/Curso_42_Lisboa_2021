/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:58:44 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 17:13:32 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_zero_minus_plus_space(t_obj *obj)
{
	if (obj->str[obj->index] == '+')
	{
		obj->plus = 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == '-')
	{
		obj->minus = 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == '0')
	{
		obj->zero = 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == ' ')
	{
		obj->space = 1;
		obj->index += 1;
	}
	if (obj->minus)
		obj->zero = 0;
	if (obj->plus)
		obj->space = 0;
}

static void	handle_width(t_obj *obj)
{
	if (obj->str[obj->index] == '*')
	{
		obj->width = va_arg(obj->vargs, int);
		if (obj->width < 0)
		{
			obj->width *= -1;
			obj->minus = 1;
		}
		obj->index += 1;
	}
	while (obj->str[obj->index] >= '0' && obj->str[obj->index] <= '9')
	{
		obj->width = (obj->width * 10) + (obj->str[obj->index] - '0');
		obj->index += 1;
	}
}

static void	handle_precision(t_obj *obj)
{
	int	p;

	if (obj->str[obj->index] == '.')
	{
		obj->dot = 1;
		obj->index += 1;
		if (obj->str[obj->index] == '*')
		{
			obj->precision = va_arg(obj->vargs, int);
			obj->index += 1;
		}
		while (obj->str[obj->index] >= '0' && obj->str[obj->index] <= '9')
		{
			p = obj->precision * 10;
			obj->precision = p + (obj->str[obj->index] - '0');
			obj->index += 1;
		}
	}
}

static void	handle_length_modifiers(t_obj *obj)
{
	if (obj->str[obj->index] == 'l')
	{
		obj->l += 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == 'l')
	{
		obj->l += 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == 'h')
	{
		obj->h += 1;
		obj->index += 1;
	}
	if (obj->str[obj->index] == 'h')
	{
		obj->h += 1;
		obj->index += 1;
	}
}

void		handle_flags(t_obj *obj)
{
	if (obj->str[obj->index] == '#')
	{
		obj->hash = 1;
		obj->index += 1;
	}
	handle_zero_minus_plus_space(obj);
	handle_zero_minus_plus_space(obj);
	handle_zero_minus_plus_space(obj);
	handle_zero_minus_plus_space(obj);
	handle_width(obj);
	handle_precision(obj);
	handle_length_modifiers(obj);
}
