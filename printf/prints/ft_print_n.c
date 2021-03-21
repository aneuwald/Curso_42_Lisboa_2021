/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_n.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:02:50 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/21 06:52:36 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"



void	ft_print_n(t_obj *obj)
{
	int			*n;
	long		*n1;
	long long 	*n2;
	short 		*n3;
	char 		*n4;

	if (obj->l == 1)
	{
		n1 = va_arg(obj->vargs, long*);
		*n1 = obj->printed;
	}
	else if (obj->l == 2)
	{
		n2 = va_arg(obj->vargs, long long*);
		*n2 = obj->printed;
	}
	else if (obj->h == 1)
	{
		n3 = (short*) va_arg(obj->vargs, int*);
		*n3 = obj->printed;
	}
	else if (obj->h == 2)
	{
		n4 = (char*) va_arg(obj->vargs, int*);
		*n4 = obj->printed;
	}
	else
	{
		n = va_arg(obj->vargs, int*);
		*n = obj->printed;
	}

}