/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:06:18 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 23:48:49 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_p_size(unsigned long long n)
{
	int	count;

	count = !n;
	while (n && ++count)
		n /= 16;
	return (count);
}

int	ft_putp(unsigned long long n, char *hex, t_tags *flag)
{
	int	len;

	len = 2 + ft_p_size(n);
	if (flag->minuses)
		return (ft_print_hex(n, hex, 0) + field_c(flag->spases - len));
	if (flag->spases)
		return (field_c(flag->spases - len) + ft_print_hex(n, hex, 0));
	return (ft_print_hex(n, hex, 0));
}
