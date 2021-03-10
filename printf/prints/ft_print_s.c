/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/08 16:17:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(t_obj *obj)
{
	char	*s;
	int		len;

	s = va_arg(obj->vargs, char*);
	len = ft_strlen(s);
	if (obj->width > len && obj->minus == 0)
		ft_print_extra(obj, obj->width - len);
	ft_putstr(s, obj);
	if (obj->width > len && obj->minus == 1)
		ft_print_extra(obj, obj->width - len);
}