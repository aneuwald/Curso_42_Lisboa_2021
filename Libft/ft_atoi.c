/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:54:06 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/17 14:44:25 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int				mult;
	long long int	nbr;

	mult = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		mult = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		nbr = (nbr * 10) + (*str - 48);
		str++;
	}
	return (nbr * mult);
}
