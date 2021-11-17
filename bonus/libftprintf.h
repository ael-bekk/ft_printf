/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:59:40 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/18 00:42:13 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_tags
{
	int	fsp;
	int	spases;
	int	plus;
	int	*point;
	int	hash;
	int	minuses;
	int	zero;
}	t_tags;

int		ft_printf(const char *fmt, ...);
int		ft_type(char c);
int		ft_print_type(va_list ap, int type, t_tags *flag);
int		ft_print_hex(unsigned long long n, char *hex, int type);

int		ft_putnbr(long n);
int		ft_putchar(char c);
int		ft_putstr(char *s, size_t len);
void	ft_flags(char *fmt, int *i, t_tags **tags);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
int		ft_nb_size(long int n);
size_t	ft_strlen(const char *s);
int		ft_putc(char c, t_tags *flag);
int		field_c(int width);
int		field_0(int width);
int		ft_puts(char *s, t_tags *flag);
int		ft_putp(unsigned long long n, char *hex, t_tags *flag);
int		ft_p_size(unsigned long long n);
void	ft_putnbr_1(unsigned int n, int *count);
int		ft_putn(long n, t_tags *flag);
int		ft_putu(unsigned int n, t_tags *flag);
int		ft_putxs(unsigned int n, int type, t_tags *flag);

#endif
