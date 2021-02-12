/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:54:06 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 22:54:06 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  nbr_digits(int n)
{
    int counter;

    counter = 0;
    while(n > 0)
    {
        counter++;
        n /= 10;
    }
    return (counter);
}

static void *handle_zero()
{
    char *str;

    if(!(str = malloc(2 * sizeof(char))))
            return NULL;
        str[0] = '0';
        str[1] = '\0';
        return (str);
}

char        *ft_itoa(int n)
{
    char    *str;
    int     isneg;
    int     len;

    if (n == 0) 
        return (handle_zero());
    
    isneg = 0;
    len = nbr_digits(n >= 0 ? n : -n) + 1;
    if (n < 0) {
        len++;
        isneg = 1;
        n *= -1;
    }
    if(!(str = malloc(len * sizeof(char))))
        return NULL;
    str[--len] = '\0';
    while(n > 0)
    {
        str[--len] = (n % 10) + '0';
        n /= 10;
    }
    if (isneg)
        str[0] = '-';

    return (str);
}
