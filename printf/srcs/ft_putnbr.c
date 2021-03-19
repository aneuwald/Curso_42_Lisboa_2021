/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:28:30 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/19 19:19:56 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int64_t n, t_obj *obj)
{
	uint64_t	holder;

	holder = n;
	if (holder >= 10)
	{
		ft_putnbr(holder / 10, obj);
		ft_putnbr(holder % 10, obj);
	}
	else
		ft_putchar(holder + '0', obj);
}
