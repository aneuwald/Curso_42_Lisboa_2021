/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_extra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:22:42 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/10 10:22:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_extra(t_obj *obj, int len)
{
	while (len-- > 0)
			ft_putchar(obj->zero ? '0' : ' ', obj);
}
	