/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klongric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:00:16 by klongric          #+#    #+#             */
/*   Updated: 2016/11/14 10:21:06 by klongric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int ii;
	int sub;
	int count;

	i = 0;
	ii = 0;
	count = 0;
	sub = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i])
		{
			ii = 0;
			count = 1;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{	
				count = argv[1][i] - 64;
			}
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				count = argv[1][i] - 96;
			}
			while (ii < count)
			{
				ft_putchar(argv[1][i]);
				ii++;
			}
			i++;
		}
		ft_putchar('\n');
	}
}


