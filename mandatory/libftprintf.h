/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:59:40 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/18 00:45:04 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# include <stdio.h>

int		ft_printf(const char *fmt, ...);
int		ft_type(char c);
int		ft_print_type(va_list ap, int type);
int		ft_print_hex(unsigned long long n, char *hex, int type);

int		ft_putnbr(long n);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_nb_size(long int n);
size_t	ft_strlen(const char *s);
int		ft_p_size(unsigned long long n);
void	ft_putnbr_1(unsigned int n, int *count);

#endif
