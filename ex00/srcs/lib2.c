/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbran <sbran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/17 05:54:57 by sbran             #+#    #+#             */
/*   Updated: 2014/08/17 13:22:33 by sbran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_colle02.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

char	*ft_strcat_m(char *dest, char *src)
{
	int		i;
	int		j;
	char	*fin;

	i = -1;
	j = 0;
	fin = (char *)malloc(sizeof(char) * ft_strlen(dest) + ft_strlen(src) + 1);
	while (dest[++i] != '\0')
		fin[i] = dest[i];
	while (src[j] != '\0')
	{
		fin[i] = src[j];
		j++;
		i++;
	}
	fin[i] = '\0';
	free(dest);
	return (fin);
}
