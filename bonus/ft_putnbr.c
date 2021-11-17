/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:03:18 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 21:36:41 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	test(long n, int len, t_tags *flag)
{
	return (field_c((flag->spases - len) * (flag->spases > len) - flag->fsp
			* (n < 0 || flag->spases > len) + !(n)
			+ flag->fsp * (n > 0 && flag->spases == 1)) + ft_putnbr(n));
}

static int	test_0(long n, int size)
{
	if (n < 0)
		return (ft_putchar('-') + field_0(size)
			+ ft_putnbr(-n));
	return (field_0(size) + ft_putnbr(n));
}

int	ft_putn(long n, t_tags *flag)
{
	int	len;
	int	p;

	p = 0;
	len = ft_nb_size(n);
	if (flag->plus && n >= 0)
		p = ft_putchar('+');
	if (flag->minuses)
		return (p + ft_putnbr(n) + field_c(flag->spases - len));
	if (flag->point[0])
		return (p + test_0(n, flag->point[1] - len + (n < 0)));
	if (flag->zero)
		return (p + test_0(n, flag->spases - len));
	if (flag->spases)
		return (p + test(n, len, flag));
	return (p + ft_putnbr(n));
}
