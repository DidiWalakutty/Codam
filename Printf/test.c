/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/28 18:39:07 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/01/07 17:33:34 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	c = 'a';
	char	perc = '%';
	char	*s = NULL;
	int		d = 8;
	int		i = 250;
	int		i2 = 250;
	int		i_min = -2147483648;
	int		i_max = 2147483647;
	unsigned int		u = 4568;
	unsigned int		u_min = 0;
	int		x = 140;
	int		X = 56871;
	int		ptr = 56871;
	void 	*ptrc;
	ptrc = &ptr;

	printf("Char:\n");
	printf("OG: char is: %c\n", c);
	ft_printf("Di: char is: %c\n", c);
	printf("\n");

	printf("Percentage:\n");
	printf("OG: percentage is: %%, extra %. \n");
	ft_printf("Di: percentage is: %%, extra %. \n");
	printf("\n");

	printf("String:\n");
	printf("OG: This is not the %% you're looking for.%\n");
	ft_printf("Di: This is not the %% you're looking for.%\n");
	printf("\n");
	printf("\n");

	printf("Empty String:\n");
	printf("OG: %s\n", s);
	ft_printf("Di: %s\n", s);
	printf("\n");
	
	printf("Decimal:\n");
	printf("OG: deci is: %d\n", d);
	ft_printf("Di: deci is: %d\n", d);
	printf("\n");

	printf("Integer:\n");
	printf("OG: int is: %i, min %i, max %i\n", i, INT_MIN, INT_MAX);
	ft_printf("Di: int is: %i, min %i, max %i\n", i, INT_MIN, INT_MAX);
	printf("\n");

	printf("Repeated Integer:\n");
	printf("OG: repeated 8x: %i, %i, %i, %i, %i, %i, %i, %i\n", i2, i2, i2, i2, i2, i2, i2, i2);
	ft_printf("DI: repeated 8x: %i, %i, %i, %i, %i, %i, %i, %i\n", i2, i2, i2, i2, i2, i2, i2, i2);
	printf("\n");

	printf("Unsigned Decimal:\n");
	printf("OG: uns_dec is: %u, min %u, max %u\n", u, u_min, UINT_MAX);
	ft_printf("Di: uns_dec is: %u, min %u, max %u\n", u, u_min, UINT_MAX);
	printf("\n");

	printf("Lower Hexa:\n");
	printf("OG: hexa is: %x\n", x);
	ft_printf("Di: hexa is: %x\n", x);
	printf("\n");

	printf("Upper Hexa:\n");
	printf("OG: HEXA is: %X\n", X);
	ft_printf("Di: HEXA is: %X\n", X);
	printf("\n");

	printf("Pointer:\n");
	printf("OG: pointer is: %p\n", ptrc);
	ft_printf("Di: pointer is: %p\n", ptrc);
	printf("\n");
	
	printf("Empty Pointer:\n");
	printf("OG: Empty pointer is: %p\n", 0);
	ft_printf("Di: Empty pointer is: %p\n", 0);
}
