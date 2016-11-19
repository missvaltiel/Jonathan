/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jortiz- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:55:41 by jortiz-           #+#    #+#             */
/*   Updated: 2016/11/09 23:36:47 by jortiz-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;
	t_list *node;

	new = *begin_list;
	if (!new)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	while (new->next)
	{
		new = new->next;
	}
	new->next = ft_create_elem(data);
}
