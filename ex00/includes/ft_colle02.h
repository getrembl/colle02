/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_colle02.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbran <sbran@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/16 23:01:36 by sbran             #+#    #+#             */
/*   Updated: 2014/08/17 13:12:20 by sbran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COLLE02_H
# define FT_COLLE02_H

# define SIZE 8192

typedef struct		s_data
{
	char			*buf;
	char			*str;
	char			*tmp;
	int				x;
	int				y;
	int				*colle;
}					t_data;

void				colle00(t_data *data);
void				colle01(t_data *data);
void				colle02(t_data *data);
void				colle03(t_data *data);
void				colle04(t_data *data);

/*
** LIB
*/
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
void				ft_putstr_s(char *str, t_data *data, int c);
void				ft_putstr(char *str);
void				ft_putchar(char c);
char				*ft_strcat_m(char *dest, char *src);

/*
** MAIN
*/
void				ft_check_size(t_data *data);
void				ft_put_colle(t_data *data, int nb_arg);
int					ft_count_arg(t_data *data);
int					ft_check_pattern(t_data *data);
void				ft_init(t_data *data);

#endif
