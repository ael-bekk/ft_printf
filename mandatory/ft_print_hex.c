/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:40:26 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/18 00:00:51 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_print_he(unsigned long long n, int type, char *hex, int *count)
{
	if (n > 15)
	{
		*count = *count + 1;
		ft_print_he(n / 16, type, hex, count);
	}
	else if (!type)
		ft_putstr("0x");
	ft_putchar(hex[n % 16]);
}

int	ft_print_hex(unsigned long long n, char *hex, int type)
{
	int	count;

	count = 1;
	ft_print_he(n, type, hex, &count);
	return (count + 2 * (!type));
}
