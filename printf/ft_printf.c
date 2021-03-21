/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:58:44 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:08:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_obj(t_obj *obj)
{
	obj->width = 0;
	obj->minus = 0;
	obj->plus = 0;
	obj->space = 0;
	obj->zero = 0;
	obj->precision = 0;
	obj->dot = 0;
	obj->size = 0;
	obj->neg = 0;
	obj->conv = 0;
	obj->hash = 0;
	obj->l = 0;
	obj->h = 0;
}

void	init_obj(t_obj *obj, char *s)
{
	obj->str = s;
	obj->index = 0;
	obj->printed = 0;
	reset_obj(obj);
}

void	handle_zero_minus_plus_space(t_obj *obj)
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

void	handle_length_modifiers(t_obj *obj)
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

void	handle_flags(t_obj *obj)
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
			obj->precision = (obj->precision * 10) + (obj->str[obj->index] - '0');
			obj->index += 1;
		}
	}
}

void	handle_conversion(t_obj *obj)
{
	char c;

	c = obj->str[obj->index];
	obj->conv = c;
	if (c == 'c')
		ft_print_c(obj);
	else if (c == 'd' || c == 'i')
		ft_print_di(obj);
	else if (c == 's')
		ft_print_s(obj);
	else if (c == 'p')
		ft_print_p(obj);
	else if (c == 'u')
		ft_print_u(obj);
	else if (c == 'n')
		ft_print_n(obj);
	else if (c == 'x' || c == 'X')
		ft_print_x(obj);
	else if (c == '%')
		ft_putchar('%', obj);
}

int		ft_printf(const char *s, ...)
{
	t_obj	obj;
	char	c;

	init_obj(&obj, (char*)s);
	va_start(obj.vargs, s);
	while (s[obj.index])
	{
		c = s[obj.index];
		if (c == '%')
		{
			obj.index += 1;
			handle_flags(&obj);
			handle_length_modifiers(&obj);
			handle_conversion(&obj);
		}
		else
			ft_putchar(c, &obj);
		reset_obj(&obj);
		obj.index += 1;
	}
	va_end(obj.vargs);

	return (obj.printed);
}
