/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:55:26 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 20:38:47 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putu(unsigned int n, t_tags *flag)
{
	int	len;

	len = ft_nb_size(n);
	if (flag->minuses)
		return (ft_putnbr(n) + field_c(flag->spases - len));
	if (flag->point[0])
		return (field_0(flag->point[1] - len) + ft_putnbr(n));
	if (flag->zero)
		return (field_0(flag->spases - len) + ft_putnbr(n));
	if (flag->spases && n > 0)
		return (field_c(flag->spases) + ft_putnbr(n));
	return (ft_putnbr(n));
}
