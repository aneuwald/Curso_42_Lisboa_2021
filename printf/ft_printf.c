/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:58:44 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/08 18:06:37 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	reset_obj(t_obj *obj)
{
	obj->width = -1;
}

void	init_obj(t_obj *obj, char *s)
{
	obj->str = s;
	obj->index = 0;
	obj->printed = 0;
	reset_obj(obj);
}

void	handle_entry(t_obj *obj)
{
	char c;

	obj->index += 1;
	c = obj->str[obj->index];
	if (c == 'c')
		ft_print_c(obj);
	else if (c == 'd' || c == 'i')
		ft_print_d(obj);
	else if (c == 's')
		ft_print_s(obj);
	else if (c == 'p')
		ft_print_p(obj);
	else if (c == 'u')
		ft_print_u(obj);
	else if (c == 'x' || c == 'X')
		ft_print_x(obj);
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
			handle_entry(&obj);
		else
			ft_putchar(c, &obj);
		reset_obj(&obj);
		obj.index += 1;
	}
	va_end(obj.vargs);

	return (obj.printed);
}
