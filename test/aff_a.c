/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 16:07:54 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/13 16:21:08 by jortiz-          ###   ########.fr       */
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
	if (argc != 2)
	{
		ft_putchar('a');
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				ft_putchar('a');
				break ;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
