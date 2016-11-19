/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klongric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:28:02 by klongric          #+#    #+#             */
/*   Updated: 2016/11/14 11:35:14 by klongric         ###   ########.fr       */
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
		ft_putchar('\n');
	}
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{	
					ft_putchar(argv[1][i] + 32);
					i++;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				ft_putchar(argv[1][i] - 32);
				i++;
			}
			else
			{
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
}
