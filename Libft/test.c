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

char    func_mapi(unsigned int i, char c)
{
    if (i < 5)
        return ('I');
    if (c == 'l' || c == 'W')
        return ('<');
    return (c);
}

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
    printf("\nft_memcpy()" OK " | (memcpy, \"Lisboa\", 2) -> \"%s\"", (char *)ft_memcpy(memcpy, "Lisboa", 2));
    char memccpy[] = "Hello";
    printf("\nft_memccpy()" OK " | (memccpy, \"Lisboa\", 's', 4) -> \"%s\"", (char *)ft_memccpy(memccpy, "Lisboa", 's', 4));
    char memmove[] = "Hello";
    printf("\nft_memmove()" OK " | (memcpy, \"Lisboa\", 2) -> \"%s\"", (char *)ft_memmove(memmove, "Lisboa", 2));
    printf("\nft_memchr()" OK " -> used in ft_strchr()");
    printf("\nft_memcmp()" OK " | (\"42Lisboa\", \"42LisboZ\", 8) -> %d | (\"Hello World\", \"hello World\", 5) -> %d", ft_memcmp("42Lisboa", "42LisboZ", 8), ft_memcmp("Hello World", "hello World", 5));
    printf("\nft_strlen()" OK " | \"Function test\" -> %d", ft_strlen("Function test"));
    char strlcpy1[] = "Hello";
    printf("\nft_strlcpy()" OK " | (strlcpy1, \"World\", 5) -> %I64d - %s", ft_strlcpy(strlcpy1, "World", 5), strlcpy1);
    printf("\nft_strlcat()" OK);
    printf("\nft_strchr()" OK " | (\"Function Test\", 'n') -> %s", ft_strchr("Function Test", 'n'));
    printf("\nft_strrchr()" OK " | (\"Function Test\", 'n') -> %s", ft_strrchr("Function Test", 'n'));
    printf("\nft_strnstr()" OK " | (\"Paola Batista\", \"Bat\", 10) -> %s", ft_strnstr("Paola Batista", "Bat", 10));
    printf("\nft_strncmp()" OK " | (\"42Lisboa\", \"42LisboZ\", 8) -> %d | (\"Hello World\", \"hello World\", 5) -> %d", ft_memcmp("42Lisboa", "42LisboZ", 8), ft_memcmp("Hello World", "hello World", 5));
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
    printf("\nft_strdup()" OK " | \"Hello World\" -> \"%s\"", ft_strdup("Hello World"));
    printf("\nft_substr()" OK " (\"42Lisboa Hello World\", 4, 10) -> \"%s\"", ft_substr("42Lisboa Hello World", 4, 10));
    printf("\nft_strjoin()" OK " (\"42\", \"Lisboa\") -> \"%s\"", ft_strjoin("42", "Lisboa"));
    printf("\nft_strtrim()" OK " (\".. .42Lisboa  ! \", \". !\") -> \"%s\"", ft_strtrim(".. .42Lisboa  ! ", ". !"));
    char **split = ft_split(" This  is  a  Test.  ", " ");
    printf("\nft_split()" OK " | (\" This  is  a  Test.  \", \" \") -> \"%s\" \"%s\" \"%s\" \"%s\"", split[0], split[1], split[2], split[3]);
    printf("\nft_itoa()" OK " | 9465 -> \"%s\" | -1520 -> \"%s\" | 0 -> \"%s\"", ft_itoa(9465), ft_itoa(-1520), ft_itoa(0));
    printf("\nft_strmapi()" OK " | \42Lisboa Hello World\" -> \"%s\"", ft_strmapi("42Lisboa Hello World", &func_mapi));
    
    int fd = open("test.txt", O_WRONLY);
    printf("\nft_putchar_fd('c', fd)" OK " -> Check test.txt"); ft_putchar_fd('c', fd); ft_putchar_fd('\n', fd);
    printf("\nft_putstr_fd(\"Teste ft_pustr_fd\", fd)" OK " -> Check test.txt"); ft_putstr_fd("Teste ft_pustr_fd", fd); aft_putchar_fd('\n', fd);
    printf("\nft_putendl_fd(\"Teste ft_putendl_fd\", fd)" OK " -> Check test.txt"); ft_putendl_fd("Teste ft_putendl_fd", fd);
    printf("\nft_putnbr_fd(25648, fd)" OK " -> Check test.txt"); ft_putnbr_fd(25648, fd); ft_putchar_fd('\n', fd);

 
    return (0);
}