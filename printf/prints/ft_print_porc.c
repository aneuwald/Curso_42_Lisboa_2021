/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_porc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:01:19 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/25 10:55:27 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_porc(t_obj *obj)
{
	char c;

	c = '%';
	obj->size = 1;
	if (obj->minus == 0)
		ft_print_spaces(obj);
	ft_putchar(c, obj);
	if (obj->minus == 1)
		ft_print_spaces(obj);
}
