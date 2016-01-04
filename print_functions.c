/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 16:19:56 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 17:41:40 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tet_table(t_tetri **table)
{
	size_t	i;
	size_t	index;

	index = 0;
	while (table[index])
	{
		i = 0;
		while (i < 4)
		{
			ft_putchar('|');
			ft_putnbr(table[index]->x[i]);
			ft_putchar('|');
			i++;
		}
		ft_putchar('\n');
		while (i < 8 && i >= 4)
		{
			ft_putchar('|');
			ft_putnbr(table[index]->y[i - 4]);
			ft_putchar('|');
			i++;
		}
		ft_putchar('\n');
		index++;
	}
}
