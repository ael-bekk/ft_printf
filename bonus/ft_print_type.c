/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:53:30 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 21:36:44 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_type(va_list ap, int type, t_tags *flag)
{
	unsigned long long	l;

	if (!--type)
		return (ft_putc((char)va_arg(ap, int), flag));
	if (!--type)
		return (ft_puts(va_arg(ap, char *), flag));
	if (!--type)
	{
		l = va_arg(ap, unsigned long long);
		return (ft_putp(l, "0123456789abcdef", flag));
	}
	if (!--type || !--type)
		return (ft_putn(va_arg(ap, int), flag));
	if (!--type)
		return (ft_putu(va_arg(ap, unsigned int), flag));
	if (!--type)
		return (ft_putxs(va_arg(ap, unsigned int), 1, flag));
	if (!--type)
		return (ft_putxs(va_arg(ap, unsigned int), 2, flag));
	if (!--type)
		return (ft_putchar('%'));
	return (0);
}
