/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:05:10 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/10 16:53:12 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_c()
{
	printf("\n### TESTE CHAR [c] ###");
	   printf("\n[Orig] -> |%c| |%5c| |%*c| |%-*c|\n", 'A', 'B', -7, 'C', 4, 'D');
	ft_printf("[Mine] -> |%c| |%5c| |%*c| |%-*c|", 'A', 'B', -7, 'C', 4, 'D');
}

void	test_s()
{
	printf ("\n\n### TESTE STRING [s] ###");
	char s[] = "Teste";
	   printf("\n[Orig] -> |%*.s| |%.1s| |%.*s| |%-9.1s|\n", 10, "123", "4567", -2, s, "");
	    ft_printf("[Mine] -> |%*.s| |%.1s| |%.*s| |%-9.1s|", 10, "123", "4567", -2, "", "");
}
void	test_d()
{
	printf ("\n\n### TESTE INT [d] ###");
	//int d1 = 439544;
	//int d2 = -1834;
	   printf("\n[Orig] -> --0*%0*.0d*0 0*%0*.10d*0--\n", -21, INT_MAX, 21, INT_MIN);
	ft_printf("[Mine] -> --0*%0*.0d*0 0*%0*.10d*0-- ", -21, INT_MAX, 21, INT_MIN);
}
void	test_i()
{
	printf ("\n\n### TESTE INT [i] ###");
	int i1 = 439544;
	int i2 = -1834;
	   printf("\n[Orig] -> |%i| |%8i| |%010i| |%*i| |%-9i|\n", i1, i1, i1, 7, i2, i2);
	ft_printf("[Mine] -> |%i| |%8i| |%010i| |%*i| |%-9i|", i1, i1, i1, 7, i2, i2);
}
void	test_p()
{
	printf ("\n\n### TESTE POINTER [p] ###");
	int 	*p = 0;
	   printf("\n[Orig] ->  |%p| |%p|\n", ULONG_MAX, -ULONG_MAX);
	ft_printf("[Mine] ->  |%p| |%p| ", ULONG_MAX, -ULONG_MAX);
}
void	test_u()
{
	printf ("\n\n### TESTE UNSIGNED INT [u] ###");
	int i1 = 4395;
	int i2 = -1834;
	   printf("\n[Orig] -> |%.u| |%6u| |%06u| |%*u| |%-13u|\n", 0, i1, i1, 13, i2, i2);
	ft_printf("[Mine] -> |%.u| |%6u| |%06u| |%*u| |%-13u|", 0, i1, i1, 13, i2, i2);
}
void	test_x()
{
	printf ("\n\n### TESTE HEX [x] ###");
	   printf("\n[Orig] -> |%-.5x|\n", 0);
	ft_printf("[Mine] -> |%-.5x| ", 0);
}
void	test_X()
{
	int X1 = 4395;
	int X2 = -1834;
	printf ("\n\n### TESTE HEX [X] ###");
	   printf("\n[Orig] -> |%X| |%6X| |%06X| |%*X| |%-13X|\n", X1, X1, X1, 13, X2, X2);
	ft_printf("[Mine] -> |%X| |%6X| |%06X| |%*X| |%-13X|", X1, X1, X1, 13, X2, X2);
}


int 	main(void)
{
	test_c();
	test_s();
	test_d();
	test_i();
	test_p();
	test_u();
	test_x();
	test_X();

	printf("\n\n %%c%%s%%p%%d%%i%%u%%x%%X%% \n");
	ft_printf("\n %%c%%s%%p%%d%%i%%u%%x%%X%% ");

	return(0);
}