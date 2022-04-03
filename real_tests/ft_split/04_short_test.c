/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_short_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:03:27 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_short_test(void)
{
	char	**splitted;

	splitted = ft_split("a", ' ');
	if (!ft_strncmp(splitted[0], "a", 1))
		return (0);
	else
		return (-1);
}
