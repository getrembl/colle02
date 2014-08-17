/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbran <sbran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 03:21:35 by sbran             #+#    #+#             */
/*   Updated: 2014/08/17 19:33:08 by getrembl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb / 10 > 0)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

void	ft_putstr_s(char *str, t_data *data, int c)
{
	while (*str)
		ft_putchar(*str++);
	ft_putnbr(data->x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(data->y);
	ft_putchar(']');
	data->colle[c] = 0;
}

int		ft_count_arg(t_data *data)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (i < 5)
	{
		if (data->colle[i])
			count++;
		i++;
	}
	return (count);
}
