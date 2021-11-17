/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:57:14 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 21:06:19 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puts(char *s, t_tags *flag)
{
	size_t	len;

	len = 0;
	if (s)
		len = ft_strlen(s);
	if (flag->minuses)
		return (ft_putstr(s, len) + field_c(flag->spases - len));
	if (flag->spases)
		return (field_c(flag->spases) + ft_putstr(s, len));
	if (flag->point[0])
		return (ft_putstr(s, flag->point[1]));
	return (ft_putstr(s, len));
}
