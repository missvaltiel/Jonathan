/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_lmfao.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:23:06 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/13 20:48:44 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int argc, char **argv)
{
	int i;

	i = argc;
	if (argc < 2)
	{	
		ft_putchar(10);
	}
	else
	{
		ft_putstr(argv[i-1]);
	}
}

