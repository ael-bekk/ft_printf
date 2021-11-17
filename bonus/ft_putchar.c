/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:44:05 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 11:40:59 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	field_c(int width)
{
	if (width <= 0)
		return (0);
	return (ft_putchar(' ') + field_c(--width));
}

int	ft_putc(char c, t_tags *flag)
{
	if (flag->minuses)
		return (ft_putchar(c) + field_c(flag->spases - 1));
	if (flag->spases)
		ft_putchar(' ');
	return (flag->spases + ft_putchar(c));
}
