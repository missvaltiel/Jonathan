/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 08:08:51 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/18 08:16:09 by jortiz-          ###   ########.fr       */
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
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i++;
		}
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
}
