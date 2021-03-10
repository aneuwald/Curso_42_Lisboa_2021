/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:05:10 by acanterg          #+#    #+#             */
/*   Updated: 2021/03/08 18:08:03 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	test_c()
{
	printf("\n### TESTE CHAR [c] ###");
	   printf("\n[Orig] -> |%c| |%5c| |%*c| |%-4c|", 'A', 'B', 7, 'C', 'D');
	ft_printf("\n[Mine] -> |%c| |%5c| |%*c| |%-4c|", 'A', 'B', 7, 'C', 'D');
}

void	test_s()
{
	printf ("\n\n### TESTE STRING [s] ###");
	char s[] = "Teste";
	   printf("\n[Orig] -> |%s| |%12s| |%*s| |%-9s|", s, s, 7, s, s);
	ft_printf("\n[Mine] -> |%s| |%12s| |%*s| |%-9s|", s, s, 7, s, s);
}
void	test_d()
{
	printf ("\n\n### TESTE INT [d] ###");
	int d1 = 439544;
	int d2 = -1834;
	   printf("\n[Orig] -> |%d| |%8d| |%08d| |%*d| |%-9d|", d1, d1, d1, 7, d2, d2);
	ft_printf("\n[Mine] -> |%d| |%8d| |%08d| |%*d| |%-9d|", d1, d1, d1, 7, d2, d2);
}
void	test_i()
{
	printf ("\n\n### TESTE INT [i] ###");
	int i1 = 439544;
	int i2 = -1834;
	   printf("\n[Orig] -> |%i| |%8i| |%08i| |%*i| |%-9i|", i1, i1, i1, 7, i2, i2);
	ft_printf("\n[Mine] -> |%i| |%8i| |%08i| |%*i| |%-9i|", i1, i1, i1, 7, i2, i2);
}
void	test_p()
{
	printf ("\n\n### TESTE POINTER [p] ###");
	char	s[] = "0x1f523ce8"; 	//THANKS WINDOWS
	int 	*p = (int*) 0x1f523ce8;
	   printf("\n[Orig] -> |%s| |%18s| |%*s| |%-15s|", s, s, 16, s, s);
	ft_printf("\n[Mine] -> |%p| |%18p| |%*p| |%-15p|", p, p, 16, p, p);
}
void	test_u()
{
	printf ("\n\n### TESTE UNSIGNED INT [u] ###");
	int i1 = 4395;
	int i2 = -1834;
	   printf("\n[Orig] -> |%u| |%6u| |%06u| |%*u| |%-13u|", i1, i1, i1, 13, i2, i2);
	ft_printf("\n[Mine] -> |%u| |%6u| |%06u| |%*u| |%-13u|", i1, i1, i1, 13, i2, i2);
}
void	test_x()
{
	int x1 = 4395;
	int x2 = -1834;
	printf ("\n\n### TESTE HEX [x] ###");
	   printf("\n[Orig] -> |%x| |%6x| |%06x| |%*x| |%-13x|", x1, x1, x1, 13, x2, x2);
	ft_printf("\n[Mine] -> |%x| |%6x| |%06x| |%*x| |%-13x|", x1, x1, x1, 13, x2, x2);
}
void	test_X()
{
	int X1 = 4395;
	int X2 = -1834;
	printf ("\n\n### TESTE HEX [X] ###");
	   printf("\n[Orig] -> |%X| |%6X| |%06X| |%*X| |%-13X|", X1, X1, X1, 13, X2, X2);
	ft_printf("\n[Mine] -> |%X| |%6X| |%06X| |%*X| |%-13X|", X1, X1, X1, 13, X2, X2);
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

	return(0);
}