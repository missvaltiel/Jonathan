/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 02:48:23 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/17 02:59:22 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int i;
	int size;
	char *newstr;

	i = 0;
	size = ft_strlen(str);
	newstr = (char *)malloc(sizeof(char) * size + 1);
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}

int		main(void)
{
	char *str1;
	char *str2;

	str1 = "lazarus";
	str2 = ft_strdup(str1);
	printf("%s\n%s", str1, str2);
	return (0);
}
