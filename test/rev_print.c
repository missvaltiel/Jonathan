/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printrev.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 13:37:23 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/16 13:54:19 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

result = int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int count;

	count = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		count = ft_strlen(argv[1]);
		while (count >= 0)
		{
			ft_putchar(argv[1][count]);
			count--;
		}
		ft_putchar('\n');
	}
	return (0);
}
