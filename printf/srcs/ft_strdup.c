/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:56:22 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/11 17:20:09 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(char *s)
{
	size_t	size;
	char	*str;

	size = ft_strlen(s) + 1;
	if (!(str = malloc(size * sizeof(char))))
		return (NULL);
	ft_strlcpy(str, s, size);
	return (str);
}
