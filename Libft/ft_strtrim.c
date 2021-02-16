/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:22:08 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/15 12:22:08 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  is_in_set(char c, char const *set)
{
    while (*set)
    {
        if (*set == c)
            return(1);
        set++;
    }
    return(0);
}

char        *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  size;
    char    *result;

    start = 0;
    end = ft_strlen(s1) - 1;

    while(is_in_set(s1[start], set))
        start++;
    while(is_in_set(s1[end], set))
        end--;

    size = end - start + 2;
    if(!(result = malloc(size * sizeof(char))))
        return(NULL);
    ft_strlcpy(result, s1 + start, size);
    return(result);

}