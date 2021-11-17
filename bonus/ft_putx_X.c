/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:02:09 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 15:22:24 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_putx(unsigned int n, t_tags *flag)
{
	if (flag->hash && n)
		return (ft_putstr("0x", 2)
			+ ft_print_hex(n, "0123456789abcdef", 1));
	if (flag->minuses)
		return (ft_print_hex(n, "0123456789abcdef", 1)
			+ field_c(flag->spases - ft_p_size(n)));
	if (flag->zero)
		return (field_0(flag->spases - ft_p_size(n))
			+ ft_print_hex(n, "0123456789abcdef", 1));
	if (flag->point[0])
		return (field_0(flag->point[1] - ft_p_size(n))
			+ ft_print_hex(n, "0123456789abcdef", 1));
	if (flag->spases)
		return (field_c(flag->spases - ft_p_size(n))
			+ ft_print_hex(n, "0123456789abcdef", 1));
	return (ft_print_hex(n, "0123456789abcdef", 1));
}

int	ft_putxs(unsigned int n, int type, t_tags *flag)
{
	if (type == 1)
		return (ft_putx(n, flag));
	if (flag->hash && n)
		return (ft_putstr("0X", 2)
			+ ft_print_hex(n, "0123456789ABCDEF", 1));
	if (flag->minuses)
		return (ft_print_hex(n, "0123456789ABCDEF", 1)
			+ field_c(flag->spases - ft_p_size(n)));
	if (flag->zero)
		return (field_0(flag->spases - ft_p_size(n))
			+ ft_print_hex(n, "0123456789ABCDEF", 1));
	if (flag->point[0])
		return (field_0(flag->point[1] - ft_p_size(n))
			+ ft_print_hex(n, "0123456789ABCDEF", 1));
	if (flag->spases)
		return (field_c(flag->spases - ft_p_size(n))
			+ ft_print_hex(n, "0123456789ABCDEF", 1));
	return (ft_print_hex(n, "0123456789ABCDEF", 1));
}
