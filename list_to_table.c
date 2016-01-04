/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_table.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 17:36:16 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 17:36:18 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_to_list(t_list **begin_list, int fd)
{
	int		ret;
	int		n;
	char	buf[22];

	n = 0;
	ret = 0;
	while ((ret = read(fd, buf, 21)))
	{
		buf[ret] = '\0';
		ft_lst_pushback(begin_list, buf, 22);
		++n;
	}
	return (n);
}

t_tetri	**ft_list_to_table(t_list **begin_list)
{
	t_tetri	**ret;
	t_list	*temp;
	size_t	index;

	temp = *begin_list;
	ret = (t_tetri **)malloc(sizeof(t_tetri *) * (ft_lstlen(begin_list) + 1));
	index = 0;
	while (temp)
	{
		ret[index] = ft_convert_list((char *)(temp->content));
		index++;
		temp = temp->next;
	}
	ret[index] = NULL;
	return (ret);
}
