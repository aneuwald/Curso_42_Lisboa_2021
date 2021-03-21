/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:44:34 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(t_obj *obj)
{
	char	*s;

	s = va_arg(obj->vargs, char*);
	if (s == NULL)
		s = "(null)";
	obj->size = ft_strlen(s);
	if (obj->dot && obj->precision < obj->size)
		obj->size = obj->precision;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putstr(s, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}