/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/11 17:49:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(t_obj *obj)
{
	char	*s;
	int		len;
	int		did_malloc;

	did_malloc = 0;
	s = va_arg(obj->vargs, char*);
	if (s == NULL)
	{
		did_malloc = 1;
		s = ft_strdup("(null)");
		if (obj->precision  < 0)
			obj->precision = 6;
	}
	len = ft_strlen(s);
	if (obj->dot && len > obj->precision)
		len = obj->precision;
	if (obj->width > len && obj->minus == 0)
		ft_print_extra(obj, obj->width - len);
	ft_putstr(s, obj);
	if (did_malloc)
		free(s);
	if (obj->width > len && obj->minus == 1)
		ft_print_extra(obj, obj->width - len);
}