/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 17:26:52 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/17 19:23:34 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int n;
	char t;

	i = 0;
	n = 0;
	while (str[i])
		i++;
	i--;
	while (n < i)
	{
		t = str[i];
		str[i] = str[n];
		str[n] = t;
		i--;
		n++;
	}
	return (str);
}

int		main(void)
{
	char s1[] = "lazarus";
	
	printf("%s", ft_strrev(s1));
	return (0);
}
