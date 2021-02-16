/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:52:12 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 22:52:12 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    str = (char*)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return ((void*)(str + i));
        i++;
    }
    return (NULL);
}