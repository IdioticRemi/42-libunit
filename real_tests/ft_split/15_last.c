/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_last.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 19:04:14 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"
#include <stdio.h>

int	split_null_terminated_string(void)
{
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split("Salut ca", ' ');
	if (!splitted[2])
		return (0);
	else
		return (-1);
}
