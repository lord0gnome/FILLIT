/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/19 16:56:01 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 15:47:46 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	ft_find_minxy(size_t *minx, size_t *miny, t_tetri *new)
{
	size_t	j;

	j = 0;
	*minx = new->x[j];
	*miny = new->y[j];
	while (j < 4)
	{
		if ((size_t)new->x[j] < *minx)
			*minx = (size_t)new->x[j];
		if ((size_t)new->y[j] < *miny)
			*miny = (size_t)new->y[j];
		++j;
	}
}

void	ft_set_xy(size_t *minx, size_t *miny, t_tetri *new)
{
	int		j;

	j = -1;
	while (++j < 4)
	{
		new->x[j] -= *minx;
		new->y[j] -= *miny;
	}
	new->length = ft_max(new->x, 4) + 1;
	new->height = ft_max(new->y, 4) + 1;
}

t_tetri		*ft_convert_list(char *str)
{
	size_t	minx;
	size_t	miny;
	t_tetri	*new;
	int		i;
	size_t	j;

	j = 0;
	i = -1;
	minx = 0;
	miny = 0;
	new = (t_tetri *)malloc(sizeof(t_tetri));
	while (str[++i])
	{
		if (str[i] == '#')
		{
			new->x[j] = i % 5;
			new->y[j] = i / 5;
			++j;
		}
	}
	ft_find_minxy(&minx, &miny, new);
	ft_set_xy(&minx, &miny, new);
	return (new);
}

void	ft_print_tab(char **tab)
{
	int i;

	i = 0;
	while(tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		++i;
	}
}
