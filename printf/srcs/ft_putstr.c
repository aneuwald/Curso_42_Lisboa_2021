/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:36:45 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:43:27 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(wchar_t *str, t_obj *obj)
{	
	int	len;

	len = ft_strlen(str);
	if (obj->dot && len > obj->precision && !obj->hash)
		len = obj->precision;
	write(1, str, len);
	obj->printed += len;
}