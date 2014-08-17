/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbran <sbran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/02 18:38:10 by sbran             #+#    #+#             */
/*   Updated: 2014/08/17 12:50:05 by sbran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"

void	check00(t_data *data, int *i, int *j, int *k)
{
	if ((*i == 1 && *j == 1) || (*i == 1 && *j == data->x) ||
		(*i == data->y && *j == 1) || (*i == data->y && *j == data->x))
		data->tmp[*k] = 'o';
	else if ((*i == 1 && *j > 1 && *j < data->x) ||
			(*i == data->y && *j > 1 && *j < data->x))
		data->tmp[*k] = '-';
	else if ((*j == data->x && *i > 1 && *i < data->y) ||
			(*j == 1 && *i > 1 && *i < data->y))
		data->tmp[*k] = '|';
	else
		data->tmp[*k] = ' ';
	(*k)++;
}

void	colle00(t_data *data)
{
	int		i;
	int		j;
	int		k;

	if (data->y < 1 || data->x < 1)
		return ;
	i = 0;
	k = 0;
	while (++i <= data->y)
	{
		j = 0;
		while (++j <= data->x)
			check00(data, &i, &j, &k);
		data->tmp[k] = '\n';
		k++;
	}
	data->tmp[k - 1] = '\0';
}
