/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strput.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:22:29 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/13 17:34:54 by jortiz-          ###   ########.fr       */
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

int		main(void)
{
	char *src;

	src = "lazarus";
	ft_putstr(src);
	return (0);
}
