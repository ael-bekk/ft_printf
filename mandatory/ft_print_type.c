/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:53:30 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/18 00:44:22 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_type(va_list ap, int type)
{
	unsigned long long	l;

	if (!--type)
		return (ft_putchar((char)va_arg(ap, int)));
	if (!--type)
		return (ft_putstr(va_arg(ap, char *)));
	if (!--type)
	{
		l = va_arg(ap, unsigned long long);
		return (ft_print_hex(l, "0123456789abcdef", 0));
	}
	if (!--type || !--type)
		return (ft_putnbr(va_arg(ap, int)));
	if (!--type)
		return (ft_putnbr(va_arg(ap, unsigned int)));
	if (!--type)
		return (ft_print_hex(va_arg(ap, unsigned int), "0123456789abcdef", 1));
	if (!--type)
		return (ft_print_hex(va_arg(ap, unsigned int), "0123456789ABCDEF", 1));
	if (!--type)
		return (ft_putchar('%'));
	return (0);
}
