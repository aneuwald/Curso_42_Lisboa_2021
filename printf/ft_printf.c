/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:58:44 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/25 10:56:04 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	reset_obj(t_obj *obj)
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
	obj->wprint = 4;
}

static void	init_obj(t_obj *obj, char *s)
{
	obj->str = s;
	obj->index = 0;
	obj->printed = 0;
	reset_obj(obj);
}

static void	handle_conversion(t_obj *obj)
{
	char c;

	c = obj->str[obj->index];
	obj->conv = c;
	if (c == 'c')
		ft_print_c(obj);
	else if (c == 'd' || c == 'i')
		ft_print_di(obj);
	else if (c == 's' && !obj->l)
		ft_print_s(obj);
	else if (c == 's' && obj->l)
		ft_print_ls(obj);
	else if (c == 'p')
		ft_print_p(obj);
	else if (c == 'u')
		ft_print_u(obj);
	else if (c == 'n')
		ft_print_n(obj);
	else if (c == 'x' || c == 'X')
		ft_print_x(obj);
	else if (c == '%')
		ft_print_porc(obj);
}

int			ft_printf(const char *s, ...)
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
			handle_conversion(&obj);
			reset_obj(&obj);
		}
		else
			ft_putchar(c, &obj);
		obj.index += 1;
	}
	va_end(obj.vargs);
	return (obj.printed);
}
