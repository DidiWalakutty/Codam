/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/16 21:54:07 by diwalaku      #+#    #+#                 */
/*   Updated: 2022/12/17 19:52:21 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	length;

	length = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[length])
	{
		print_char(s[length]);
		length++;
	}
	return (length);
}
