/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nub_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:18:05 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 13:50:02 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_nb_size(long int n)
{
	int	count;

	count = (!n) + (n < 0);
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
