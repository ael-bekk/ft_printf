/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:09:10 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 14:43:50 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s, size_t len)
{
	if (s)
	{
		if (len)
		{
			if (ft_strlen(s) <= len)
			{
				write(1, s, ft_strlen(s));
				return (ft_strlen(s));
			}
			write(1, s, len);
			return (len);
		}
		return (0);
	}
	write(1, "(null)", 6);
	return (6);
}
