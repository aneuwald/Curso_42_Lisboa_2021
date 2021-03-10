/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:03:20 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/10 17:01:52 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_size(unsigned int n)
{
	int len;

	len = 0;
	while(n > 0)
	{
		len++;
		n /= 10;
	}

	return (len);
}

void	ft_print_u(t_obj *obj)
{
	unsigned int	u;
	int				size;

	u = va_arg(obj->vargs, unsigned int);
	size = get_size(u);
	if (obj->width > size && obj->minus == 0)
		ft_print_extra(obj, obj->width - size);
	ft_putnbr(u, obj);
	if (obj->width > size && obj->minus == 1)
		ft_print_extra(obj, obj->width - size);

}
