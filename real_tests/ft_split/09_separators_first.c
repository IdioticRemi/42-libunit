/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_separators_first.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:31:47 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_separators_first(void)
{
	char	**splitted;

	splitted = ft_split("       Separators here", ' ');
	if (!ft_strncmp(splitted[0], "Separators", 10)
		&& !ft_strncmp(splitted[1], "here", 4))
		return (0);
	else
		return (-1);
}
