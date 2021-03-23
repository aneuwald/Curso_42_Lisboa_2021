/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 20:43:37 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 16:44:38 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

static int		base_is_invalid(char *base)
{
	int i;
	int m;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (1);
		m = i + 1;
		while (base[m])
			if (base[m++] == base[i])
				return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void			ft_putnbr_base(unsigned long nbr, char *base, t_obj *obj)
{
	unsigned long	holder;
	unsigned long	base_length;

	if (base_is_invalid(base))
		return ;
	base_length = ft_strlen(base);
	holder = nbr;
	if (holder >= base_length)
	{
		ft_putnbr_base(holder / base_length, base, obj);
		ft_putnbr_base(holder % base_length, base, obj);
	}
	else
		ft_putchar(base[holder], obj);
}
