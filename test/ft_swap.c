/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:44:09 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/16 12:34:23 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(void)
{
	int one;
	int	two;

	one = 1;
	two = 2;
	ft_swap(&one, &two);
	printf("one:%d\ntwo:%d", one, two);
	return (0);
}
