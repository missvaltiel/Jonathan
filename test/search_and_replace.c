/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 08:00:07 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/18 08:07:27 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[2][0] == argv[1][i])
			{
				ft_putchar(argv[3][0]);
				i++;
			}
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
