/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_only_separators.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlafay <tlafay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:44:42 by tlafay            #+#    #+#             */
/*   Updated: 2022/04/03 17:17:33 by tlafay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_split.h"

int	split_only_separators(void)
{
	char	**splitted;

	splitted = ft_split("                   ", ' ');
	if (!ft_strncmp(splitted[0], "", 0))
		return (0);
	else
		return (-1);
}
