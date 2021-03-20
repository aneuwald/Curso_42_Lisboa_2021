#include "ft_printf.h"

int main () 
{
    printf("o |%+-5d| \n", 1);
    ft_printf("m |%#02X| ", 1);
}