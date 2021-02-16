/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acantergi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 23:58:40 by acanterg          #+#    #+#             */
/*   Updated: 2021/02/10 23:58:40 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define OK   ": \x1B[32m[OK]\x1B[0m"
#define NO_OK   ": \x1B[31m[NO OK]\x1B[0m"
#define OK_TEST   ": \x1B[33m[OK, BUT HAVE NO TEST]\x1B[0m"

int    main(void)
{
    printf("\n---- STATUS ----\n");
    printf("\nft_putchar()" OK " | 'c' -> "); ft_putchar('c');
    printf("\nft_putstr()" OK " | \"Function test\" -> "); ft_putstr("Function test");
    char memset[] = "Function test ft_memset";
    printf("\nft_memset()" OK " | (\"Function test\", 'c', 5) -> \"%s\"", (char *)ft_memset(memset, 'c', 5));
    ft_bzero(memset, 2);
    printf("\nft_bzero()" OK " | (memset, 2) -> [0]: '%c' [1]: '%c' [2]: '%c' ", memset[0], memset[1], memset[2]);
    char memcpy[] = "0042";
    char lisboa[] = "Lisboa";
    printf("\nft_memcpy()" OK " | (memcpy, lisboa, 2) -> \"%s\"", (char *)ft_memcpy(memcpy, lisboa, 2));
    char memccpy[] = "Hello";
    printf("\nft_memccpy()" OK " | (memccpy, lisboa, 's', 4) -> \"%s\"", (char *)ft_memccpy(memccpy, lisboa, 's', 4));
    printf("\nft_memmove()" NO_OK);
    printf("\nft_memchr()" NO_OK);
    printf("\nft_memcmp()" NO_OK);
    printf("\nft_strlen()" OK " | \"Function test\" -> %d", ft_strlen("Function test"));
    char strlcpy1[] = "Hello";
    printf("\nft_strlcpy()" OK " | (strlcpy1, \"World\", 5) -> %I64d - %s", ft_strlcpy(strlcpy1, "World", 5), strlcpy1);
    printf("\nft_strlcat()" OK);
    printf("\nft_strchr()" OK " | (\"Hello World\", 'W') -> %s", ft_strchr("Hello World", 'W'));
    printf("\nft_strrchr()" NO_OK);
    printf("\nft_strnstr()" OK " | (\"Paola Batista\", \"Bat\", 10) -> %s", ft_strnstr("Paola Batista", "Bat", 10));
    printf("\nft_strncmp()" NO_OK);
    printf("\nft_atoi()" OK " | \" \\t\\r -1521as4\" -> %d | \" \\n 42lisboa\" -> %d", ft_atoi(" \t\r -1521as4"), ft_atoi(" \n 42lisboa"));
    printf("\nft_isalpha()" OK " | '9' -> %d | 'a' -> %d | 'A' -> %d", ft_isalpha('9'), ft_isalpha('a'), ft_isalpha('A'));
    printf("\nft_isdigit()" OK " | '4' -> %d | '2' -> %d | 'a' -> %d", ft_isdigit('4'), ft_isdigit('2'), ft_isdigit('a'));
    printf("\nft_isspace()" OK " | ' ' -> %d | '\t' -> %d | '6' -> %d", ft_isspace(' '), ft_isspace('\t'), ft_isspace('6'));
    printf("\nft_isalnum()" OK " | '7' -> %d | 'V' -> %d | '\\n' -> %d", ft_isalnum('7'), ft_isalnum('V'), ft_isalnum('\n'));
    printf("\nft_isascii()" OK " | '7' -> %d | '\\n' -> %d | 128 -> %d", ft_isascii('7'), ft_isascii('\n'), ft_isascii(128));
    printf("\nft_isprint()" OK " | \\n -> %d | '4' -> %d | 127(DEL) -> %d", ft_isprint('\n'), ft_isprint('4'), ft_isprint(127));
    printf("\nft_toupper()" OK " | c -> %c | D -> %c | 8 -> %c", ft_toupper('c'), ft_toupper('D'), ft_toupper('8'));
    printf("\nft_tolower()" OK " | c -> %c | D -> %c | 8 -> %c", ft_tolower('c'), ft_tolower('D'), ft_tolower('8'));
    char *calloc = ft_calloc(2, 2*sizeof(char));
    printf("\nft_calloc()" OK " | 3 -> [0]: '%c' [1]: '%c' [2]: '%c'", calloc[0], calloc[1], calloc[2]);
    printf("\nft_strd()" NO_OK);
    printf("\nft_substr()" NO_OK);
    printf("\nft_strjoin()" OK " (\"42\", \"Lisboa\") -> \"%s\"", ft_strjoin("42", "Lisboa"));
    printf("\nft_strtrim()" NO_OK);
    char **split = ft_split(" This  is  a  Test.  ", " ");
    printf("\nft_split()" OK " | (\" This  is  a  Test.  \", \" \") -> \"%s\" \"%s\" \"%s\" \"%s\"", split[0], split[1], split[2], split[3]);
    printf("\nft_itoa()" OK " | 9465 -> \"%s\" | -1520 -> \"%s\" | 0 -> \"%s\"", ft_itoa(9465), ft_itoa(-1520), ft_itoa(0));
    printf("\nft_strmapi()" NO_OK);
    printf("\nft_putchar_fd()" NO_OK);
    printf("\nft_putstr_fd()" NO_OK);
    printf("\nft_putendl_fd()" NO_OK);
    printf("\nft_putnbr_fd()" NO_OK);

 
    return (0);
}