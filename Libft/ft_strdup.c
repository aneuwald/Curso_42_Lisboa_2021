/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:56:22 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 22:56:22 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t  size;
	char	*str;

	size = ft_strlen(s) + 1;
    if(!(str = malloc(size * sizeof(char))))
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	return (str);
}