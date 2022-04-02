/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 09:50:03 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/02 15:10:43 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include <stdio.h>

void	load_error(char *name, int (*test)(void), int enabled)
{
	if (enabled != 0 && enabled != 1)
	{
		write(1, "Enabled must be equal to 1 or 0\n", 32);
		exit(1);
	}
	if (!name || !test)
	{
		write(1, "Name and/or test is empty\n", 27);
		exit(1);
	}
}

void	load_test(t_testlist **head, char *name, int (*test)(void), int enabled)
{
	t_testlist	*new;
	t_testlist	*tmp;

	load_error(name, test, enabled);
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
