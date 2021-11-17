/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:12:10 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 22:05:21 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, fmt);
	count = 0;
	i = 0;
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			if (ft_type(fmt[++i]))
				count += ft_print_type(ap, ft_type(fmt[i++]));
		}
		else
			count += ft_putchar(fmt[i++]);
	}
	va_end(ap);
	return (count);
}
