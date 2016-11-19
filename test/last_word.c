/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 21:49:28 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/17 22:03:38 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		i = ft_strlen(argv[1]);
		i = i- 1;
		while (argv[1][i] >= 9 && argv[1][i] <= 13)
			i--;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
			i--;
		i = i + 1;
		while (argv[1][i])
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}

	return (0);
}
