/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 15:20:59 by guiricha          #+#    #+#             */
/*   Updated: 2016/01/04 17:35:04 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	t_list	*list;
	t_tetri	**new;
	int		fd;
	t_data	*data;

	list = NULL;
	new = NULL;
	fd = 0;
	data = NULL;
	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) != -1)
			ft_to_list(&list, fd);
		if (ft_check(&list))
		{
			data = ft_data_init();
			new = ft_list_to_table(&list);
			ft_print_tet_table(new);
			// TO DO, FIND ALGORITHM THAT WORKS HERE....
			ft_putstr("it works until here!");
		}
		else
			ft_putstr("error\n");
	}
	return (0);
}
