/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bekk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:37:24 by ael-bekk          #+#    #+#             */
/*   Updated: 2021/11/17 16:29:08 by ael-bekk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_tags_init(t_tags **tags)
{
	*tags = (t_tags *)malloc(sizeof(t_tags));
	(*tags)->fsp = 0;
	(*tags)->spases = 0;
	(*tags)->plus = 0;
	(*tags)->point = (int *)malloc(sizeof(int) * 2);
	(*tags)->point[0] = 0;
	(*tags)->point[1] = 0;
	(*tags)->hash = 0;
	(*tags)->minuses = 0;
	(*tags)->zero = 0;
}

int	ft_flag_cond_sp(t_tags *tags, char *fmt, int ind)
{
	if (ft_isdigit((int)fmt[ind + 1]))
	{
		tags->spases = 1 + ft_atoi(fmt + ind + 1);
		ind += 1 + ft_nb_size(ft_atoi(fmt + ind + 1));
	}
	else
	{
		ind++;
		tags->spases = 1;
	}
	return (ind);
}

int	ft_flag_cond(t_tags *tags, char *fmt, int ind)
{
	if (fmt[ind] == '0' && ind++)
		tags->zero = 1;
	if (ft_isdigit((int)fmt[ind]))
	{
		tags->spases = ft_atoi(fmt + ind);
		ind += ft_nb_size(ft_atoi(fmt + ind));
	}
	if (fmt[ind] == ' ')
		tags->fsp = 1;
	if (fmt[ind] == ' ')
		ind = ft_flag_cond_sp(tags, fmt, ind);
	if (fmt[ind] == '+' && ind++)
		tags->plus = 1;
	if (fmt[ind] == '.')
	{
		tags->point[0] = 1;
		tags->point[1] = ft_atoi(fmt + ind + 1);
		ind += 1 + (tags->point[1] != 0) * ft_nb_size(ft_atoi(fmt + ind + 1));
	}
	if (fmt[ind] == '#' && ind++)
		tags->hash = 1;
	if (fmt[ind] == '-' && ind++)
		tags->minuses = 1;
	return (ind);
}

void	ft_flags(char *fmt, int *i, t_tags **tags)
{
	int		ind;

	ft_tags_init(tags);
	ind = *i;
	while (fmt[ind] && (fmt[ind] == ' ' || ft_isdigit((int)fmt[ind])
			|| fmt[ind] == '+' || fmt[ind] == '-'
			|| fmt[ind] == '.' || fmt[ind] == '#'))
		ind = ft_flag_cond(*tags, fmt, ind);
	if (ft_type(fmt[ind]))
		*i = ind;
}
