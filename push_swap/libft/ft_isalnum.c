/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 14:50:13 by diwalaku      #+#    #+#                 */
/*   Updated: 2022/11/10 15:05:01 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int d)
{
	if ((d >= '0' && d <= '9') || (d >= 'A' && d <= 'Z') || \
	(d >= 'a' && d <= 'z'))
		return (1);
	return (0);
}