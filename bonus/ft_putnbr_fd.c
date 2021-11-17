/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:09:34 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 11:44:45 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_1(unsigned int n, int *count)
{
	if (n > 9)
	{
		*count = *count + 1;
		ft_putnbr_1(n / 10, count);
	}
	ft_putchar(n % 10 + '0');
}

int	ft_putnbr(long n)
{
	int	count;

	if (n < 0)
		ft_putchar('-');
	count = (n < 0) + 1;
	ft_putnbr_1(n * (n >= 0) - n * (n < 0), &count);
	return (count);
}
