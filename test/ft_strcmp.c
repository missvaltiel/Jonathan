/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 03:19:54 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/17 11:23:35 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

int		main(void)
{
	char *str1;
	char *str2;
	int result;
	int strresult;

	str1 = "lazarus";
	str2 = "cerberus";
	result = ft_strcmp(str1, str2);
	strresult = strcmp(str1, str2);
	printf("%d\n%d", result, strresult);
	return (0);
}
