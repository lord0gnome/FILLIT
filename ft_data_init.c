/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:34:18 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 15:36:05 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_data	*ft_data_init(void)
{
	t_data	*new;
	
	new = (t_data *)malloc(sizeof(t_data));
	new->max = 0;
	new->l = 0;
	new->h = 0;
	return (new);
}
