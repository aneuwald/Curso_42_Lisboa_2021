/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:36:45 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 16:21:35 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putwstr(wchar_t *str, t_obj *obj)
{	
	int		i;

	if (obj->dot && obj->size > obj->precision && !obj->hash)
		obj->size = obj->precision;
	i = 0;
	obj->wprint = obj->size;
	while (str[i] && obj->wprint > 0)
		ft_putwchar(str[i++], obj);
}
