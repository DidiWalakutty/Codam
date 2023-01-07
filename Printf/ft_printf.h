/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/30 18:34:11 by diwalaku      #+#    #+#                 */
/*   Updated: 2022/12/18 21:16:31 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	print_char(char c);
int	print_str(char *s);
int	print_nbr(int n);
int	print_uns_dec(unsigned int n);
int	print_lowerhex(unsigned long n);
int	print_upperhex(unsigned int n);
int	print_pointer(unsigned long ptr);

#endif