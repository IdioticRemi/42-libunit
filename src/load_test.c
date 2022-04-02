/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 09:50:03 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 12:03:45 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

void	load_test(t_testlist **head, char *name, int (*test)(void), int enabled)
{
	t_testlist	*new;
	t_testlist	*tmp;

	new = (t_testlist *)ft_xmalloc(sizeof(t_testlist));
	new->name = name;
	new->test = test;
	new->enabled = enabled;
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		tmp = *(head);
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}
