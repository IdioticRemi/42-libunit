/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_segv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:32:31 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_segv(void)
{
	char	**splitted;

	splitted = ft_split((char *) 3564, 1);
	if (!ft_strncmp(splitted[0], "", 0))
		return (0);
	else
		return (-1);
}
