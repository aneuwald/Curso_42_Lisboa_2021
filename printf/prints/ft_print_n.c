/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/23 17:19:19 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_n(t_obj *obj)
{
	void		*n;

	n = va_arg(obj->vargs, long long int *);
	if (obj->l == 1)
		*(long *)n = obj->printed;
	else if (obj->l == 2)
		*(long long *)n = obj->printed;
	else if (obj->h == 1)
		*(short *)n = obj->printed;
	else if (obj->h == 2)
		*(char *)n = obj->printed;
	else
		*(int *)n = obj->printed;
}
