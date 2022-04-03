/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:39 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 16:46:55 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_null_test(void)
{
	char	**splitted;

	splitted = ft_split((void *)0, ' ');
	if (!splitted)
		return (0);
	else
		return (-1);
}
