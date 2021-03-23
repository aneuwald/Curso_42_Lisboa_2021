/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 16:32:15 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ls(t_obj *obj)
{
	int		i;
	wchar_t	*s;

	i = 0;
	s = va_arg(obj->vargs, wchar_t*);
	if (s == NULL)
	{
		s = L"(null)";
		obj->precision < 0 ? obj->precision = 6 : 0;
	}
	while (s[i])
		obj->size += ft_wcharlen(s[i++]);
	if (obj->dot && obj->precision < obj->size)
		obj->size = obj->precision;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putwstr(s, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}
