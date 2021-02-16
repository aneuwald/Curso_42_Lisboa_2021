/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 00:08:58 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/11 00:08:58 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int     len;
    char    *str;

    len = ft_strlen(s) - 1;
    str = (char*)s;
    while (len >= 0)
    {
        if(str[len] == (unsigned char)c)
            return (str + len);
        len--;
    }
    return (NULL);
}