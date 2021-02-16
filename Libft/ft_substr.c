/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:21:08 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/15 12:21:08 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *result;

    if (!(result = malloc((len + 1) * sizeof(char))))
        return (NULL);
    ft_strlcpy(result, s + start, len + 1);
    return (result);
}