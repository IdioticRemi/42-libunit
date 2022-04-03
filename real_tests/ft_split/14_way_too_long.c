/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_way_too_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 18:42:00 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_way_too_long(void)
{
	char	**splitted;

	splitted = ft_split("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \
		aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \
		aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \
		aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \
		aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa \
		aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa ", 'a');
	if (!ft_strncmp(splitted[0], "", 0))
		return (0);
	else
		return (-1);
}
