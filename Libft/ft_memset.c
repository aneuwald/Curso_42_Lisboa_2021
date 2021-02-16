/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:49:34 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 22:49:34 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void   *ft_memset(void *s, int c, size_t n)
{
    size_t			i;
	unsigned char	holder;
	char			*p;

	holder = c;
	i = 0;
	p = s;
	while (i < n)
		p[i++] = holder;
	return (s);
}
