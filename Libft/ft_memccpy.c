/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:50:54 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 22:50:54 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char    *dest_p;
    char    *src_p;
    size_t  i;

    dest_p = dest;
    src_p = (char*)src;
    i = 0;
    while(i < n)
    {
        dest_p[i] = src_p[i];
        if (dest_p[i] == (unsigned char)c)
            return(dest_p + i + 1);
        i++;
    }
    return (NULL);
}